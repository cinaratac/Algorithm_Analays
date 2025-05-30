#include <iostream>
#include <vector>

using namespace std;

// Heapify işlemi (max heap için)
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;         // En büyük olarak kökü varsay
    int left = 2 * i + 1;    // Sol çocuk
    int right = 2 * i + 2;   // Sağ çocuk

    // Sol çocuk kökten büyükse
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Sağ çocuk şu anki en büyükten büyükse
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Eğer en büyük eleman kök değilse, yer değiştir ve alt ağacı heapify et
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort ana fonksiyonu
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Max heap oluştur
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Birer birer elemanları heap'ten çıkar
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);       // Kökü (en büyük) sona koy
        heapify(arr, i, 0);         // Geriye kalan kısmı yeniden heapify et
    }
}

// Vektörü ekrana yazdır
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

// Test
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Orijinal dizi:\n";
    printArray(arr);

    heapSort(arr);

    cout << "Sıralanmış dizi:\n";
    printArray(arr);

    return 0;
}
