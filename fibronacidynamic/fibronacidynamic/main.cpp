#include <iostream>
using namespace std;

int fibronachi(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int fb[100];
    fb[0]=0;
    fb[1]=1;
    for(int i=2;i<=n;i++){
        fb[i]=fb[i-2]+fb[i-1];
    }
    return fb[n];
}

int main(){
    cout<<"Fibronachinin büyüklüğünü giriniz"<<endl;
    int n;
    cin>>n;
    int sonuc=fibronachi(n);
    cout<<sonuc;
}
