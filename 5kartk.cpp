#include<iostream>
using namespace std;
int dzielenie(int a, int b, int &c){
c=a%b;
return a/b;
}
int main(){
int a=31,b=7,c;
cout<<dzielenie(a,b,c)<<" "<<c<<endl;
}
