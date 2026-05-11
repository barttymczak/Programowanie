#include <iostream>
#include <vector>

using namespace std;


int main(){
vector<int> v1;
int a;
cin>>a;
vector<int> v2(a);

for(int i=1;i<a+1;i++){
    v1.push_back(i*i);
    cout<<" "<<v1[i-1];
}
cout<<endl;

for(int i=1;i<a+1;i++){
    v2[i-1]=i*i;
    cout<<" "<<v2[i-1];
}
cout<<endl;

}