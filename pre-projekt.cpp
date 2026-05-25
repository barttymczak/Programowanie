#include<string>
#include<iostream>
#include<vector>
#include<cmath>
#include<fstream>
#include<map>
using namespace std;
/* krosno
int main()
{
  std::ifstream plik("krosno.txt");
  if(plik.fail()){
    std::cout << "Brak pliku" << std::endl;
    return 1;
  }

  // Deklaracja pojemnika map
  std::map<int,int> rok_temp;
  // Zamiast dłuższej nazwy iteratora - krótsza: iter 
  typedef std::map<int,int>::iterator iter;

  int rok,miesiac,dzien;
  double temp;

  // Wczytywanie pliku i jednocześnie wypełnianie pojemnika map
  while(plik >> rok >> miesiac >> dzien >> temp){
    if(temp>=20 && temp<=25){
      rok_temp[rok]++;
    }    
  }
  plik.close();

  // Wypisywanie zawartości pojemnika map przy użyciu iteratorów
  for (iter it=rok_temp.begin(); it!=rok_temp.end(); ++it){
    std::cout << it->first << " " << it->second << std::endl;
  }
  // Wypisywanie zawartości pojemnika map bez iteratorów
  for(auto elem:rok_temp){
    std::cout <<elem.first << " " << elem.second << std::endl;    
  }
  
  return 0;
}
  */

int main(){    

ifstream plik("trojki.txt");
if(plik.fail()){
    cout << "Brak pliku" << std::endl;
    return 1;
  }

int x,y,z,sx,sy,sz;
int X=0;
int Y=0;
int Z=0;
vector<int> druga;

// Wczytywanie pliku i jednocześnie wypełnianie pojemnika 
while(plik >> x >> y >> z){  
    X+=x;
    Y+=y;
    Z+=z;
    druga.push_back(y);
    
}
plik.close();
cout<<"Wczytano "<<druga.size()<<" liczb."<<endl;

sx=X/druga.size();
cout<<sx<<endl;

sy=(Y/druga.size());
cout<<sy<<endl;

sz=Z/druga.size();
cout<<sz<<endl;

return 0;
}