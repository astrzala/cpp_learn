#include <iostream>

using  namespace std;

class Mieszkaniec
{
private:
	string imie, nazwisko;
	int dzien, miesiac, rok;
	long int pesel;

public:
	int nr_bramy, nr_mieszkania;
	
	Mieszkaniec(string="brak", string="brak", int=01, int=01, int=1900, long int=00000);
	~Mieszkaniec();

	void wyswietl();
	void dodaj();
	void szukaj();
	void usun();
};

class Blok
{
	string ulica;
	int nr_bramy, lp_mieszkancow, pietra;

};