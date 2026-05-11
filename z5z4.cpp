#include <iostream>

using namespace std;

void sumodd(int &a, int &b){
    int sum=0;
    if(a<b){
    for(int i=a;i<=b;i++){
        if(i%2==0) sum+=i;
    }
    }else{
     for(int i=a;i>=b;i++){
        if(i%2==0) sum+=i;
    }
    }cout<<sum<<endl;
}
void sumeven(int &a, int &b){
    int sum=0;
    if(a<b){
    for(int i=a;i<=b;i++){
        if(i%2!=0) sum+=i;
    }
    }else{
     for(int i=a;i>=b;i++){
        if(i%2!=0) sum+=i;
    }
    }cout<<sum<<endl;
}


int main(){
    int a,b;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    sumodd(a,b);
    sumeven(a,b);
   
}