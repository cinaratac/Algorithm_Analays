#include <iostream>
using namespace std;

// Pivot'a göre diziyi bölen yardımcı fonksiyon
int partition(int dizi[], int low, int high) {
    int pivot = dizi[high]; // son eleman pivot
    int i = low - 1; // küçük elemanların son index'i

    for (int j = low; j < high; j++) {
        if (dizi[j] < pivot) {
            i++;
            swap(dizi[i], dizi[j]);
        }
    }

    swap(dizi[i + 1], dizi[high]); // pivot'u doğru konuma koy
    return i + 1;
}

// Quick Sort fonksiyonu
void quickSort(int dizi[], int low, int high) {
    if (low < high) {
        int pi = partition(dizi, low, high);

        quickSort(dizi, low, pi - 1);   // sol taraf
        quickSort(dizi, pi + 1, high);  // sağ taraf
    }
}

// Ana fonksiyon
int main() {
    int dizi[] = {7, 2, 1, 8, 6, 3, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    cout << "Orijinal dizi: ";
    for (int i = 0; i < n; i++)
        cout << dizi[i] << " ";
    cout << endl;

    quickSort(dizi, 0, n - 1);

    cout << "Siralanmis dizi: ";
    for (int i = 0; i < n; i++)
        cout << dizi[i] << " ";
    cout << endl;

    return 0;
}
