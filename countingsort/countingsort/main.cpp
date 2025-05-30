
#include <iostream>
using namespace std;

void countingSort(int arr[], int size){
    int maxVal=0;
    for(int i=0;i<=size;i++){
        if(arr[i]>maxVal) maxVal=arr[i];
    }
    int count[1000]={0};
    for(int i=0;i<=size;i++){
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<=maxVal;++i){
        while(count[i]>0){
            arr[index++]=i;
            count[i]--;
        }
    }
    
    
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Orijinal dizi: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

    countingSort(arr, size);

    cout << "Sıralanmış dizi: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
