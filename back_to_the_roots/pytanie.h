#include "stdafx.h"
#include <iostream>

using namespace std;

class Pytanie 
{
	public:
		string tresc;
		string a, b, c, d;
		int nr_pytania;
		string poprawna;
		string odpowiedz;
		int punkt;

		void wczytajTresc();
		void zadajPytanie();
		void sprawdzOdpowiedz();
};