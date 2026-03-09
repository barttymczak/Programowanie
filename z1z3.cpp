#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main()
{
    int n,sil=1;
    cin>>n;
    while (n>1){
        sil=sil*n;
        cout<<sil<<endl;
        n--;
    }
}