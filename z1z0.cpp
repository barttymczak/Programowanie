#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cout<<"podaj współczynniki: "<<"a= "<<endl;
    cin>>a;
    cout<<"podaj współczynniki: "<<"b= "<<endl;
    cin>>b;
    cout<<"podaj współczynniki: "<<"c= "<<endl;
    cin>>c;
    delta = -pow(b,2) + 4*a*c;
    cout<<delta<<endl;
    if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"delta wieksza od 0, rownanie ma rozwiązania: x1= "<<x1<<"   x2= "<<x2<<endl;
    }else if(delta<0){
        cout<<"delta <0, brak rozwiazan"<<endl;
    }else {
        x1=(-b)/(2*a);
        cout<<"delta = 0, jest 1 rozwiązanie: "<<x1<<endl;
    }
    
    return 0;
}