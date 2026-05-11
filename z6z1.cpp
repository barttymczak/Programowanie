#include <iostream>
#include <vector>

using namespace std;


int main(){
vector<int> v1(100);
int v2[100];
for(int i=1;i<101;i++){
    v1[i-1]=i*i;
    cout<<" "<<v1[i-1];
}
cout<<endl;

for(int i=1;i<101;i++){
    v2[i-1]=i*i;
    cout<<" "<<v2[i-1];
}
cout<<endl;
cout<<v1[100]<<endl;
}