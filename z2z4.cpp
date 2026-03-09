#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;

int losuj(int a, int b){
    //srand - inicjalizacja generowania 
    //time(null) - czas procesora
    return  rand() % b + a;
}

int main(){
    int a,b;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    cout<<"wynik losowania z przedziału ["<<a<<","<<b<<"] to: "<<losuj(a,b)<<endl;
}