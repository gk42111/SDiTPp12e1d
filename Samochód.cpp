#include "Samochód.h"

Samochód::Samochód()
{
	kolorNadwozia = "";
	pojemnoscSilnika = 0;
	iloscDrzwi = 0;
	cena = 0;
	rokProdukcji = 0;
	wiekSamochodu = 0;
	markaSamochodu = "";
	modelSamochodu = "";
}

Samochód::Samochód(string kolorNadwozia, int pojemnoscSilnika, int iloscDrzwi, long cena, int rokProdukcji, string markaSamochodu, string modelSamochodu)
{
	this->kolorNadwozia = kolorNadwozia;
	this->pojemnoscSilnika = pojemnoscSilnika;
	this->iloscDrzwi = iloscDrzwi;
	this->cena = cena;
	this->rokProdukcji = rokProdukcji;
	this->wiekSamochodu = 2020 - rokProdukcji;
	this->markaSamochodu = markaSamochodu;
	this->modelSamochodu = modelSamochodu;
}

void Samochód::setKolorNadwozia(string kolorNadwozia)
{
	this->kolorNadwozia = kolorNadwozia;
}

void Samochód::setPojemnoscSilnika(int pojemnoscSilnika)
{
	this->pojemnoscSilnika = pojemnoscSilnika;
}

void Samochód::setIloscDrzwi(int iloscDrzwi)
{
	this->iloscDrzwi = iloscDrzwi;
}

void Samochód::setCena(long cena)
{
	this->cena = cena;
}

void Samochód::setRokProdukcji(int rokProdukcji)
{
	this->rokProdukcji = rokProdukcji;
	this->wiekSamochodu = 2020 - rokProdukcji;
}

void Samochód::setMarkaSamochodu(string markaSamochodu)
{
	this->markaSamochodu = markaSamochodu;
}

void Samochód::setModelSamochodu(string modelSamochodu)
{
	this->modelSamochodu = modelSamochodu;
}

string Samochód::getModelSamochodu()
{
	return modelSamochodu;
}

long Samochód::getCena()
{
	return cena;
}

int Samochód::getWiek()
{
	return wiekSamochodu;
}

int Samochód::getPojemnosc()
{
	return pojemnoscSilnika;
}

ostream & operator<<(ostream & wyjscie, const Samochód & s)
{
	return wyjscie << "marka: " << s.markaSamochodu << " model: " << s.modelSamochodu << " pojemnosc: " << s.pojemnoscSilnika << " ilosc drzwi: " << s.iloscDrzwi << " cena: " << s.cena << " rok produkcji: " << s.rokProdukcji << " wiek: " << s.wiekSamochodu << " kolor: " << s.kolorNadwozia << endl;
}
