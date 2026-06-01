#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Liczba{
  private:
  double wartosc;
  public:
  Liczba();
  Liczba(double l){};
  void setWartosc(double l){ wartosc=l;};
  double getWartosc(){return wartosc;};
  double potega(int n){
    return pow(wartosc,n);};
    };
    int main(){
    
    Liczba l1(7.13);
    l1.setWartosc(7.13);
    cout<<l1.potega(3);
    }
