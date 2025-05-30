#include <iostream>
using namespace std;


int binarySearch(int dizi[], int n, int hedef) {
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(dizi[mid]==hedef) return mid;
        else if(hedef<dizi[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    
    return -1; // bulunamadı
}
int main() {
    int dizi[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int hedef = 13;

    int sonuc = binarySearch(dizi, n, hedef);

    if (sonuc != -1)
        std::cout << "Bulundu! Index: " << sonuc << "\n";
    else
        std::cout << "Bulunamadi.\n";
}
//O(log n)
