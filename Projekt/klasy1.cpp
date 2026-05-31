#include <iostream>
#include <cmath>

using namespace std;

class Trojkat{
    public:
        void obwod() {cout<<a+b+c<<endl;}
        void pitagoras();
        Trojkat(){a=0;b=0;c=0;};    //konstruktor
        Trojkat(float x, float y, float z){a=x;b=y;c=z;};    //konstruktor
        ~Trojkat(){cout<<"destroyed"<<endl;};   //destruktor
        void czyTrojkat();
        void set(float x, float y, float z) {a=x;b=y;c=z;}
        void print(){cout<<a<<" "<<b<<" "<<c<<endl;}
        void get_a(){cout<<a<<endl;}
        void get_b(){cout<<b<<endl;}
        void get_c(){cout<<c<<endl;}
        void pole();
 
    private:
        float a;
        float b;
        float c;
};
void Trojkat::pitagoras(){
    cout<<sqrt(a*a+b*b)<<endl;
};
void Trojkat::czyTrojkat(){
    if(a+b>c && a+c>b && b+c>a){
        cout<<"Tak"<<endl;
    }else cout<<"Nie"<<endl;
};
void Trojkat::pole(){
    float p=((a + b + c) / 2.0);
    cout<<sqrt(p * (p - a) * (p - b) * (p - c))<<endl;
};


int main(){

float a=3,b=4,c=5;
Trojkat t1;
t1.set(a,b,c);
t1.get_c();
t1.print();
t1.pole();
t1.czyTrojkat();
t1.pitagoras();
cin>>a>>b>>c;
t1.set(a,b,c);
t1.print();
Trojkat t0;
t0.print();
Trojkat t2(a,b,c);
t2.print();

}
