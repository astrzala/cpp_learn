#include "spoldzielnia.h"
#include <iostream>

using namespace std;

void Mieszkaniec::wystietl()
{
	cout << imie << " " << nazwisko << " " << wiek << " " << pesel << " " << endl;
}

Mieszkaniec::Mieszkaniec(string i, string n, int w, int p)
{
	imie = i;
	nazwisko = n;
	wiek = w;
	pesel = p;
}

Mieszkaniec::~Mieszkaniec(){}