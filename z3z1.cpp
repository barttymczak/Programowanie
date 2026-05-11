#include <iostream>
using namespace std;

long long int silnia(long long int n){
    if(n<2) return 1;
    else{
        return silnia(n-1)*n;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<silnia(n)<<endl;
}