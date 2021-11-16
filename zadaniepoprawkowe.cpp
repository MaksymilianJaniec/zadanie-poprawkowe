#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int a;
int b;
int x;
int y;

int main()
{
string linia;	
fstream plik;
plik.open("trojki_liczb.txt", ios::in);
	
if(plik.good() == true)
{
	
	while(!plik.eof())
	{
	plik >> a >> b >> x;
	y=a*x+b;
	cout <<"a="<<a<<"\t b="<<b<<"\t x="<<x<<"\t Wartosc funkcji y=ax+b = "<<y<<endl;
	
    getline(plik, linia);
	}
	
}	


plik.close();	
	
plik.open("wartosci_funkcji.txt", ios::out);

plik <<"Wartosc funkcji y=ax+b = "<<y<<endl;

plik.close();
	
return 0;
}



