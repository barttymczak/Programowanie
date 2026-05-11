#include <iostream>

using namespace std;

double pow(double p, int w){
   double wyn=1;
   for(int i=w;i>0;i--){
    wyn*=p;
   }return wyn;
}

void powv(double p, int w){
   double wyn=1;
   for(int i=w;i>0;i--){
    wyn*=p;
   }
   cout<<wyn;
}

int main(){
    double p;
    int w;
    cout<<"podaj p = ";cin>>p;
    cout<<"podaj w = ";cin>>w;
    cout<<pow(p,w)<<endl;
    powv(p,w);
    cout<<endl;
}