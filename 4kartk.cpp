#include<iostream>

using namespace std;

int kwadrat(int a){
return a*a;
}
int main(){
int a;
cout<<"podaj liczbe do obliczenia jej kwadratu: ";
cin>>a;
cout<<"Kwadrat liczby "<<a<<" wynosi: "<<kwadrat(a)<<endl;
}
