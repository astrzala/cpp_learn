// back_to_the_roots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "pytanie.h"
#include <ctime>

using namespace std;


int main()
{
	srand(time(NULL));
	int wylosowane = rand()%3+1
	Pytanie p1;
	p1.nr_pytania = wylosowane;
	p1.wczytajTresc();
	p1.zadajPytanie();
	p1.sprawdzOdpowiedz();

	cout << "Koniec quizu: " << p1.punkt;

	system("pause");
	return 0;
}



