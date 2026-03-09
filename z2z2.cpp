#include<iostream>
using namespace std;
int main(){
    float p,q,wynik;
    while(true){
        cout<<"podaj licznik p = ";cin>>p;
        cout<<"podaj mianownik q = ";cin>>q;
        if(q==0) break;
        else{
            wynik=p/q;
            cout<<wynik<<endl;
            continue;
        }
    }
}
