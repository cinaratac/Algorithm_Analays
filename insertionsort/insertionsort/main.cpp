

#include <iostream>
void insertionSort(int dizi[], int n) {
    for(int i=1;i<n;i++){
        int key=dizi[i];
        int j=i-1;
        while(j>=0&&dizi[j]>key){
            dizi[j+1]=dizi[j];
            j--;
        }
        dizi[j+1]=key;
    }
}

int main() {
    int dizi[] = {5, 2, 9, 1, 3};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    insertionSort(dizi, n);

    for (int i = 0; i < n; i++)
        std::cout << dizi[i] << " ";
}
//O(n^2)
