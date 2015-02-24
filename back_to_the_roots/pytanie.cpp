#include "stdafx.h"
#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <cstdlib>


using namespace std;

void Pytanie::wczytajTresc()
{
	fstream plik;
	plik.open("quiz.txt", ios::in);
	if (plik.good() == false)
	{
		cout << "Nie uda³o sie otworzyc pliku" << endl;
		exit(0);
	}
	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int ktora_linia = 1;
	string linia;

	while (getline(plik, linia))
	{
		if (ktora_linia == nr_linii) tresc = linia;
		if (ktora_linia == nr_linii + 1) a = linia;
		if (ktora_linia == nr_linii + 2) b = linia;
		if (ktora_linia == nr_linii + 3) c = linia;
		if (ktora_linia == nr_linii + 4) d = linia;
		if (ktora_linia == nr_linii + 5) poprawna = linia;
		ktora_linia++;
	}
	plik.close();
}

void Pytanie::zadajPytanie()
{
	cout << endl << tresc << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << "-------------------------" << endl;
	cout << "Odpowiedz: ";
	cin.ignore();
	cin >> odpowiedz;
}

void Pytanie::sprawdzOdpowiedz()
{
	if (odpowiedz == poprawna)
	{
		punkt = 1;
	}
	else
	{
		punkt = 0;
	}

}
