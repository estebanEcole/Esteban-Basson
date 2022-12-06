#include <iostream>
#include <Windows.h>
#include "MyArrayInt.h"
#include "MyArray.h"

using namespace std;

struct Point
{
	int x;
	int y;
};

void affiche(MyArrayInt& tab)
{
	for (unsigned int i = 0; i < tab.GetSize(); i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}
}

void affiche(MyArray<Point>& tab)
{
	for (unsigned int i = 0; i < tab.GetSize(); i++) {
		cout << "tab[" << i << "] = " << tab[i].x << ", " << tab[i].y << endl;
	}
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int sizeTab1 = 5;
	MyArrayInt tab1(sizeTab1);

	for (unsigned int i = 0; i < sizeTab1; i++) {
		tab1[i] = 2 * i + 1;	// Utilisation de l'opérateur [] pour remplir le tableau
	}

	affiche(tab1);
	cout << endl;

	cout << "Extention de tab1: " << endl;
	tab1.AddItem(66);	//  Ajoute 1 élément valant 66 au tableau => augmentation de la taille
	affiche(tab1);
	cout << endl;

	MyArray<Point> tab2(5);
	for (unsigned int i = 0; i < sizeTab1; i++) {
		Point p{ i, 2 * i };
		tab2[i] = p;	// Utilisation de l'opérateur [] pour remplir le tableau
	}
	affiche(tab2);
	cout << endl;

	cout << "<<< PROGRAMME TERMINE >>>" << endl << endl;
}
