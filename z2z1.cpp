#include<iostream>
using namespace std;
int main(){
    int n,tab;
    cout<<"podaj liczbę dla tablicznki mnozenia: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        tab=j*i;
        cout<<tab<<" ";
        }
    cout<<endl;
    }
}
