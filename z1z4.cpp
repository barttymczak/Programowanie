#include <iostream>

using namespace std;

bool pierwsza(int n){

    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }return true;
}
int main()
{
    int n;
	
	cout<<"Podaj liczbę: ";
	cin>>n;
	
	if(pierwsza(n))
		cout<<"Liczba "<<n<<" jest pierwsza"<<endl;
	else
		cout<<"Liczba "<<n<<" nie jest pierwsza"<<endl;
	
	return 0;
}