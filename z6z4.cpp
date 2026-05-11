#include <iostream>
#include <vector>

using namespace std;
/*
vector<int> swap(int a, int b){
   
   int pom=a;
   a=b;
   b=pom;
   return 

}
*/
void swap(vector<int> &v, int a, int b){
   int pom;
   cout<<v[a-1]<<" "<<v[b-1]<<endl;
   pom=v[a-1];
   v[a-1]=v[b-1];
   v[b-1]=pom;
   cout<<v[a-1]<<" "<<v[b-1]<<endl;
}

int main(){
    int a,b;
    cout<<"podaj a = ";cin>>a;
    cout<<"podaj b = ";cin>>b;
    vector<int> v(b);
    for(int i=1;i<b+1;i++){
        v[i-1]=i*i;
     cout<<" "<<v[i-1];
    }
    cout<<endl;
    swap(v,a,b);
    for(int i=1;i<b+1;i++){
        cout<<" "<<v[i-1];
    }
    cout<<endl;
}