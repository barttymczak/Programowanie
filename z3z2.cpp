#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
double losuj(int a, int b){
    srand(time(NULL));
    return  (double)rand() % a + b;
}
double znak(){
    srand(time(NULL));
    return pow(-1,rand());
}
int main(){
    double a,b;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    for(int i=1;i<10;i++){
        cout<<"wynik losowania z przedziału ["<<a<<","<<b<<"] to: "<<znak()*losuj(a,b)<<endl;
    }
}