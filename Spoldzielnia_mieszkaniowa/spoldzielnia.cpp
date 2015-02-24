#include "spoldzielnia.h"
#include <iostream>
#include <string>

using namespace std;


void Mieszkaniec::wyswietl()
{
	cout << imie << " " << nazwisko << " " << dzien << "-" << miesiac << "-" << rok <<" " << pesel << " " << endl;
}

void Mieszkaniec::dodaj()
{
	cout << "Podaj imie: ";
	cin >> imie;
	cout << endl;
	
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << endl;
	system("CLS");

	cout << "Podaj dzien urodzin: ";
	cin >> dzien;
	cout << "          ";
	cin.ignore(1);

	cout << "Podaj miesiac urodzin: ";
	cin >> miesiac;
	cout << "          ";
	cin.ignore(1);

	cout << "Podaj rok urodzin: ";
	cin >> rok;
	system("CLS");

	cout << "Podaj 5 ostatnich cyfr PESELu: ";
	cin >> pesel;
}

Mieszkaniec::Mieszkaniec(string i, string n, int d, int m, int r, long int p)
{
	imie = i;
	nazwisko = n;
	dzien = d;
	miesiac = m;
	rok = r;
	pesel = p;
}

Mieszkaniec::~Mieszkaniec(){}