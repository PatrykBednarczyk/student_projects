#include <iostream>

using namespace std;

int main(){
  float odleglosc;
  int liczosob;
  int cenaosoba;
  float srspalanie = 8;
  float cenapal = 6.24;
  int wielkbaku = 50;
  
  cout<<"Srednie spalanie w samochodzie wynosi:" <<endl<<srspalanie<<"L/km"<<endl;
  cout<<"Wielkosc baku wynosi"<<endl<<wielkbaku<<"L"<<endl;
  cout<<"Cena za litr palwia na stacji wynosi 6.24"<<endl;
  cout<<"Podaj liczbe osob uczestniczacych w przejzdzie"<<endl;
  cin>> liczosob;
  cout<<"Podaj odleglosc do przebycia(Podaj w kilometrach)"<<endl;
  cin>> odleglosc;
  float spalonepal =(srspalanie*odleglosc)/100;
  cout<<"Spalone paliwo w podanej odleglosci bedzie wynosic"<<endl<<spalonepal<<"L"<<endl;
  float cspalonepal = cenapal * spalonepal;
  cout<<"Cena za paliwo wynosi"<<endl<<cspalonepal<<"zl"<<endl;
  cout<<"Cena za osobe wynosi"<<endl<<cspalonepal/liczosob<<"zl"<<endl;
  int licztankowan =(spalonepal/40)+1;
  cout<<"ilosc tankowan wynosi"<<endl<<licztankowan<<endl;
	return 0;
}
