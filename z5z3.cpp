#include <iostream>

using namespace std;

void swapchar(char &a, char &b){
   
   cout<<a<<" "<<b<<endl;
   char pom=a;
   a=b;
   b=pom;
   cout<<a<<" "<<b<<endl;
}

void swapreal(double &x, double &d){

   cout<<x<<" "<<d<<endl;
   double pom=x;
   x=d;
   d=pom;
   cout<<x<<" "<<d<<endl;
}

int main(){
    char a,b;
    double x,d;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    cout<<"podaj x = ";cin>>x;
    cout<<"podaj d = ";cin>>d;
    swapchar(a,b);
    swapreal(x,d);
}