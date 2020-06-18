#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdlib>
#include "Samochód.h"
using namespace std;

int main() {
	string kolorNadwozia[] = { "bia?y","?ó?ty","zielony","niebieski","pomara?czowy","metalik","czarny","br?zowy","fioletowy","czerwony" };
	int pojemnoscSilnika[] = { 1000,2000,3000,4000,5000 };
	int iloscDrzwi[] = { 3, 5 };
	vector<string> markaSamochodu{ "Kia","Honda","Mazda","Volkswagen","Fiat" };
	vector<string> modeleSamochoduA{ "Sportage","Sorento","Ceed","Rio","Optima","Stinger","Picanto","Stonic" };
	vector<string> modeleSamochoduB{ "Civic","CRV","Jazz","HRV","Accord","NSX","Varadero","Prelado" };
	vector<string> modeleSamochoduC{ "CX-7","CX-3","3","2","6","CX-5","RX-8","MX-5" };
	vector<string> modeleSamochoduD{ "Tiguan","Polo","Arteon","Touran","Scirocco","Golf","Passat","Amarok" };
	vector<string> modeleSamochoduE{ "500","126p","Panda","Tipo","Punto","Ducato","Uno","Cinquecento" };
	std::map<int, Samochód, std::less<>> Obj;
	Samochód* samochod = new Samochód[10000];
	for (int i = 0; i < 10000; i++) {
		samochod[i].setCena(std::rand() % 999001 + 1000);
		samochod[i].setIloscDrzwi(iloscDrzwi[std::rand() % 2 + 0]);
		samochod[i].setKolorNadwozia(kolorNadwozia[std::rand() % 10 + 0]);
		samochod[i].setMarkaSamochodu(markaSamochodu[std::rand() % 5 + 0]);
		if (samochod[i].getMarkaSamochodu() == "Kia")
			samochod[i].setModelSamochodu(modeleSamochoduA[std::rand() % 8 + 0]);
		else if (samochod[i].getMarkaSamochodu() == "Honda")
			samochod[i].setModelSamochodu(modeleSamochoduB[std::rand() % 8 + 0]);
		else if (samochod[i].getMarkaSamochodu() == "Mazda")
			samochod[i].setModelSamochodu(modeleSamochoduC[std::rand() % 8 + 0]);
		else if (samochod[i].getMarkaSamochodu() == "Volkswagen")
			samochod[i].setModelSamochodu(modeleSamochoduD[std::rand() % 8 + 0]);
		else
			samochod[i].setModelSamochodu(modeleSamochoduE[std::rand() % 8 + 0]);
		samochod[i].setPojemnoscSilnika(pojemnoscSilnika[std::rand() % 5 + 0]);
		samochod[i].setRokProdukcji(std::rand() % 51 + 1970);
		Obj.insert({ i, samochod[i] });
	}


	for (std::map<int, Samochód>::iterator it = Obj.begin(); it != Obj.end(); it++)
	{
		std::cout << it->first << " " << it->second;
	}

	vector<Samochód> posortowaneWgCeny;
	for (int i = 0; i < 10000; i++) {
		posortowaneWgCeny.push_back(samochod[i]);
		posortowaneWgCeny[i].cenaPubliczna = posortowaneWgCeny[i].getCena();
	}

	std::sort(std::begin(posortowaneWgCeny), std::end(posortowaneWgCeny), [](const Samochód &a, const Samochód &b) {
		return std::abs(a.cenaPubliczna) < std::abs(b.cenaPubliczna);
	});
	cout << endl;

	for (int i = 0; i < 10000; i++) {
		cout << posortowaneWgCeny[i];
	}

	vector<Samochód> posortowaneWgWieku;
	for (int i = 0; i < 10000; i++) {
		posortowaneWgWieku.push_back(samochod[i]);
		posortowaneWgWieku[i].wiekPubliczny = posortowaneWgWieku[i].getWiek();
	}

	std::sort(std::begin(posortowaneWgWieku), std::end(posortowaneWgWieku), [](const Samochód &a, const Samochód &b) {
		return std::abs(a.wiekPubliczny) < std::abs(b.wiekPubliczny);
	});
	cout << endl;
	for (int i = 0; i < 10000; i++) {
		cout << posortowaneWgWieku[i];
	}

	vector<Samochód> posortowaneWgPojemnosci;
	for (int i = 0; i < 10000; i++) {
		posortowaneWgPojemnosci.push_back(samochod[i]);
		posortowaneWgPojemnosci[i].pojemnoscPubliczna = posortowaneWgPojemnosci[i].getPojemnosc();
	}

	std::sort(std::begin(posortowaneWgPojemnosci), std::end(posortowaneWgPojemnosci), [](const Samochód &a, const Samochód &b) {
		return std::abs(a.pojemnoscPubliczna) < std::abs(b.pojemnoscPubliczna);
	});
	cout << endl;
	for (int i = 0; i < 10000; i++) {
		cout << posortowaneWgPojemnosci[i];
	}

	std::map<int, Samochód, std::less<>> Obj2;
	for (int i = 0; i < 10000; i++) {
		Obj2.insert({ i,samochod[i] });
	}

	delete[] samochod;

	system("pause");
	return 0;
}