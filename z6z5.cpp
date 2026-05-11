#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
const double p=M_PI;


int main(){

    long double pikw[20];
    long double piodw[20];
    for(int i=0;i<20;i++){
        pikw[i]=pow(p,i+1);
     cout<<" "<<pikw[i];
    }
    cout<<endl<<" nic "<<endl;
    for(int i=19;i>0;i--){
        piodw[i]=pikw[20-i];
     cout<<" "<<piodw[i];
    }
    cout<<endl;

}