#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main()
{
    string word;
    string znak;
    cout<<"podaj słowo: "<<endl;
    getline(cin, word);
    cout<<"podaj szukany znak: "<<endl;
    cin>>znak;
    bool czy=word.find(znak);
    if (word.find(znak)) 
        {
            cout<<"ma"<<endl;
        }
    else cout<<"brak"<<endl;
}
