#include<iostream>
using namespace std;
int main(){
int n,dzielnik,suma=0;
cout<<"podaj n: ";
cin>>n;
for(int i=2;i<n;i++){
if(n%i==0){
dzielnik=n/i;
suma+=dzielnik;
cout<<dzielnik<<" jest dzielnikiem "<<n<<endl;}
}
cout<<"suma to: "<<suma<<endl;
return 0;
}
