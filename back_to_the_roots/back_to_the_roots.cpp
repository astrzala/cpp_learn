// back_to_the_roots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n,k, suma;
	cout << "Liczba pierwsza: ";
	cin >> n;
	cout << "Liczba druga: ";
	cin >> k;
	suma = n + k;
	cout << "Suma dwoch liczb wynosi: " << suma << endl;

	system("pause");
	return 0;
}

