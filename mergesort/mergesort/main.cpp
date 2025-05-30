
#include <iostream>
using namespace std;

void merge(int dizi[], int sol, int orta, int sag) {
    int n1 = orta - sol + 1;
    int n2 = sag - orta;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = dizi[sol + i];
    for (int j = 0; j < n2; j++)
        R[j] = dizi[orta + 1 + j];

    int i = 0, j = 0, k = sol;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            dizi[k++] = L[i++];
        else
            dizi[k++] = R[j++];
    }

    while (i < n1)
        dizi[k++] = L[i++];

    while (j < n2)
        dizi[k++] = R[j++];
}

void mergeSort(int dizi[], int sol, int sag) {
    if (sol < sag) {
        int orta = sol + (sag - sol) / 2;

        mergeSort(dizi, sol, orta);
        mergeSort(dizi, orta + 1, sag);

        merge(dizi, sol, orta, sag);
    }
}
int main() {
    int dizi[] = {5, 2, 4, 1, 3};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    mergeSort(dizi, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << dizi[i] << " ";
}

//O(n*log n)
