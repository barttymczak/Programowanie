#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
float fsuma=0.0;
double dsuma=0.0;
for(int i=0;i<21;i++){
    fsuma+=pow(10,-i);
    dsuma+=pow(10,-i);
    cout<<setprecision(20)<<fsuma<<" "<<setprecision(20)<<dsuma<<endl;
}
}