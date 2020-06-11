#include "Samoch�d.h"

Samoch�d::Samoch�d()
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

Samoch�d::Samoch�d(string kolorNadwozia, int pojemnoscSilnika, int iloscDrzwi, long cena, int rokProdukcji, string markaSamochodu, string modelSamochodu)
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

void Samoch�d::setKolorNadwozia(string kolorNadwozia)
{
	this->kolorNadwozia = kolorNadwozia;
}

void Samoch�d::setPojemnoscSilnika(int pojemnoscSilnika)
{
	this->pojemnoscSilnika = pojemnoscSilnika;
}

void Samoch�d::setIloscDrzwi(int iloscDrzwi)
{
	this->iloscDrzwi = iloscDrzwi;
}

void Samoch�d::setCena(long cena)
{
	this->cena = cena;
}

void Samoch�d::setRokProdukcji(int rokProdukcji)
{
	this->rokProdukcji = rokProdukcji;
	this->wiekSamochodu = 2020 - rokProdukcji;
}

void Samoch�d::setMarkaSamochodu(string markaSamochodu)
{
	this->markaSamochodu = markaSamochodu;
}

void Samoch�d::setModelSamochodu(string modelSamochodu)
{
	this->modelSamochodu = modelSamochodu;
}

string Samoch�d::getModelSamochodu()
{
	return modelSamochodu;
}

long Samoch�d::getCena()
{
	return cena;
}

int Samoch�d::getWiek()
{
	return wiekSamochodu;
}

int Samoch�d::getPojemnosc()
{
	return pojemnoscSilnika;
}

ostream & operator<<(ostream & wyjscie, const Samoch�d & s)
{
	return wyjscie << "marka: " << s.markaSamochodu << " model: " << s.modelSamochodu << " pojemnosc: " << s.pojemnoscSilnika << " ilosc drzwi: " << s.iloscDrzwi << " cena: " << s.cena << " rok produkcji: " << s.rokProdukcji << " wiek: " << s.wiekSamochodu << " kolor: " << s.kolorNadwozia << endl;
}
