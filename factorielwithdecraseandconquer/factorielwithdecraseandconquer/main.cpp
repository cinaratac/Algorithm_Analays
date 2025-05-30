#include <iostream>
using namespace std;

int factoriel(int n){
    if(n==0||n==1) return 1;
    return factoriel(n-1)*n;
   
}
int main(){
    cout<<"Faktorielini almak istediğiniz sayıyı girin"<<endl;
    int n;
    cin>>n;
    cout<<factoriel(n)<<endl;
    
    
}
