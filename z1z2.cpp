#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main()
{
    int p, k,sum;
    cout<<"podaj pierwsza liczbe: "<<endl;
    cin>>p;
    cout<<"podaj liczbe konca: "<<endl;
    cin>>k;
    for(int i=p;i<=k;i++){
        sum+=i;
        cout<<sum<<endl;
    }
    sum=0;
    while(p<=k){
        sum+=p;
        p++;
        cout<<sum<<endl;
    }
}