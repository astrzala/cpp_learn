#include <iostream>

using  namespace std;

class Mieszkaniec
{
private:
	string imie, nazwisko;
	int wiek, pesel;

public:
	int nr_bramy, nr_mieszkania;
	
	Mieszkaniec(string, string, int, int, int, int, int);
	~Mieszkaniec();

	void wystietl();
	void dodaj();
	void szukaj();
	void usun();
};

class Blok
{
	string ulica;
	int nr_bramy, lp_mieszkancow, pietra;

};