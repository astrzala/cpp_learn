// back_to_the_roots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

void menu()
{
	cout << "[1] - Dodawanie" << endl;
	cout << "[2] - Odejmowanie" << endl;
	cout << "[0] - Wyjscie z programu" << endl;
}

int pobierzInta(char *message)
{
	int out;
	string in;

	while (true)
	{
		cout << message;
		getline(cin, in);
		stringstream ss(in); //covert input to a stream for conversion to int

		if (ss >> out && !(ss >> in))
		{
			return out;
		}
		//(ss >> out) checks for valid conversion to integer
		//!(ss >> in) checks for unconverted input and rejects it

		cin.clear(); //in case of a cin error, like eof() -- prevent infinite loop
		cerr << "\nNiepoprawna liczba\n"; //if you get here, it's an error
	}
}


int wczytajLiczbe()
{
	int a = pobierzInta("Podaj liczbe: ");
	return a;
}

int dodawanie(int a, int b)
{
	return a + b;
}

int odejmowanie(int a, int b)
{
	return a - b;
}

int main()
{
	cout << "W programie sa dostepne nastepujace opcje:" << endl;
	int liczba;
	do
	{
		menu();
		cin >> liczba;
		int a, b, c, d;
		switch (liczba)
		{
		case 1:
			a = wczytajLiczbe();
			b = wczytajLiczbe();
			cout << "Wynik dodawania: " << dodawanie(a, b) << endl << endl;
			break;
		case 2:
			c = wczytajLiczbe();
			d = wczytajLiczbe();
			cout << "Wynik odejmowania: " << odejmowanie(c, d) << endl << endl;
			break;
		default:
			break;
		} //switch
	} while (liczba != 0);

	system("pause");
	return 0;
}


