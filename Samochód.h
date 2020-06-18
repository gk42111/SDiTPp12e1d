#pragma once
#include <string>
using namespace std;
class Samochód
{
private:
	string kolorNadwozia;
	int pojemnoscSilnika;
	int iloscDrzwi;
	long cena;
	int rokProdukcji;
	int wiekSamochodu;
	string markaSamochodu;
	string modelSamochodu;
public:
	long cenaPubliczna = 0;
	int wiekPubliczny = 0;
	int pojemnoscPubliczna = 0;
	Samochód();
	Samochód(string, int, int, long, int, string, string);
	void setKolorNadwozia(string);
	void setPojemnoscSilnika(int);
	void setIloscDrzwi(int);
	void setCena(long);
	void setRokProdukcji(int);
	void setMarkaSamochodu(string);
	void setModelSamochodu(string);
	string getModelSamochodu();
	string getMarkaSamochodu();
	long getCena();
	int getWiek();
	int getPojemnosc();
	friend ostream& operator<<(ostream &wyjscie, const Samochód & s);
};