#include "spoldzielnia.h"
#include <iostream>

using  namespace std;

int main()
{   
	//Tutaj wszystko sie psuje!
	Mieszkaniec * tab;

	tab = new Mieszkaniec;

	cout << "Mieszkancy osiedla:" << endl;
	Mieszkaniec m[1]("Teodor", "Szurek", 25, 03, 2014, 12341);
	Mieszkaniec m[2]("Kornel", "Szurek", 04);
	Mieszkaniec m[3];

	m[3].dodaj();

	m[1].wyswietl();
	m[2].wyswietl();
	m[3].wyswietl();



	system("pause");
	return 0;
}