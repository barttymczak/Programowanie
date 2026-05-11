#include <iostream>

using namespace std;

void swap(int a, int b){
   
   cout<<a<<" "<<b<<endl;
   int pom=a;
   a=b;
   b=pom;
   cout<<a<<" "<<b<<endl;
}

void swapref(int &a, int &b){

   cout<<a<<" "<<b<<endl;
   int pom=a;
   a=b;
   b=pom;
   cout<<a<<" "<<b<<endl;
}

void swapwsk(int *a, int *b){

   cout<<a<<" "<<b<<endl;
   int pom= *a;
   *a=*b;
   *b=pom;
   cout<<&a<<" "<<&b<<endl;
}


int main(){
    int a,b;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    swap(a,b);
    swapref(a,b);
    swapwsk(&a,&b);
   
}