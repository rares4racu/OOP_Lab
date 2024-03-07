// Lab2_tema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Masina.h"
using namespace std;
int main()
{
	Masina Car;
	const char* firma_Car = new char[100];
	firma_Car = "Audi";
	Car.Set_firma(firma_Car);
	cout << "Firma masinei:" << " " << Car.Get_firma();
	cout << endl;
	Car.Set_nr_litri_combustibili(58);
	cout << "Numarul de litri de combustibil a masinii:" << Car.Get_nr_litri_combustibili();
	cout << endl;
	Car.Set_kilometraj(3000);
	cout << "Kilometrajul masinii:" << Car.Get_kilometraj();
	cout << endl;
	cout << "Kilometrajul masinii pe OLX:" << Car.bisnitar();
	cout << endl;
	Car.Set_consum(2.5);
	cout << "Consumul masinii (l/km):" << " " << Car.Get_consum();
	cout << endl;
	Car.cursa(20);
	cout << "Kilometrajul dupa cursa:" << Car.Get_kilometraj();
	cout << endl;
	cout << "Combustibilul ramas dupa cursa:" << Car.Get_nr_litri_combustibili();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
