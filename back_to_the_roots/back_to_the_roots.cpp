// back_to_the_roots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, suma;
	cout << "Podaj jak� liczb� chcesz do siebie dodac: ";
	cin >> n;
	suma = n + n;
	cout << "Suma dwoch liczb wynosi: " << suma << endl;

	system("pause");
	return 0;
}

