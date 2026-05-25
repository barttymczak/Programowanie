#include<vector>
#include<iostream>
using namespace std;

int main(){
vector<int> liczby(50);
vector<int> podzielne;
for (int i=0;i<50;i++){
  liczby[i]=13+i;
  if ((i+13)%7==0){
    podzielne.push_back(i+13);
cout<<podzielne[i]<<endl;
}
}
}
