#include "MyArrayInt.h"
#include <iostream>

using namespace std;

MyArrayInt::MyArrayInt(unsigned int size) : size(size)
{
	this->myArray = new int[this->size];
	cout << "Construction MyArray(int) " << this << " Size:" << this->size << ", myArray:" << this->myArray << endl;
}

MyArrayInt::MyArrayInt() : MyArrayInt(10)
{
	cout << "Construction MyArray() " << this << endl;
}

MyArrayInt::~MyArrayInt()
{
	delete[] myArray;
	myArray = nullptr;
	cout << "Destruction MyArray " << this << " Size:" << this->size << ", myArray:" << this->myArray << endl;
}

void MyArrayInt::Fill(int val)
{
	for (unsigned int i = 0; i < size; i++) {
		myArray[i] = val;
	}
}

int& MyArrayInt::operator[](const unsigned int& index)
{
	if (index < size)
		return myArray[index];
	else 
		throw "Index out of bounds";
}

void MyArrayInt::AddItem(int val)
{
	unsigned int newSize = size + 1;

	int* newTab = new int[newSize];	//Allocation d'un tableau plus grand
	for (int i = 0; i < size; i++) {
		newTab[i] = myArray[i];		// Copie de l'ancien tableau vers le nouveau
	}
	newTab[size] = val;	// Ajout du nouvel élément

	delete[] myArray;	//  Destruction de l'ancien tableau
	size = newSize;		//  Modif des attributs
	myArray = newTab;

}
