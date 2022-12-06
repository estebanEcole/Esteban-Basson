#pragma once
#include <iostream>

using namespace std;

template <class T> class MyArray
{
private:
	unsigned int size;
	T* myArray; // Le tableau d'entier encapsulé... int myArray[size]

public:
	MyArray(unsigned int size);
	MyArray();
	virtual ~MyArray();

	unsigned int GetSize() { return size; }
	unsigned int GetSize() const { return size; }
	T* GetMyArray() { return myArray; }
	T* GetMyArray() const { return myArray; }

	void Fill(T val);
	T& operator[](const unsigned int& index);
	void AddItem(T val);
};

template<class T>
inline MyArray<T>::MyArray(unsigned int size) : size(size)
{
	this->myArray = new T[this->size];
	cout << "Construction MyArray(T) " << this << " Size:" << this->size << ", myArray:" << this->myArray << endl;
}

template<class T>
inline MyArray<T>::MyArray() : MyArray<T>(10)
{
	cout << "Construction MyArray() " << this << endl;
}

template<class T>
inline MyArray<T>::~MyArray()
{
	delete[] myArray;
	myArray = nullptr;
	cout << "Destruction MyArray " << this << " Size:" << this->size << ", myArray:" << this->myArray << endl;
}

template<class T>
inline void MyArray<T>::Fill(T val)
{
	for (int i = 0; i < size; i++) {
		myArray[i] = val;
	}
}

template<class T>
inline T& MyArray<T>::operator[](const unsigned int& index)
{
	if (index < size)
		return myArray[index];
	else
		throw "Index out of bounds";
}

template<class T>
inline void MyArray<T>::AddItem(T val)
{
	unsigned int newSize = size + 1;

	T* newTab = new T[newSize];
	for (int i = 0; i < size; i++) {
		newTab[i] = myArray[i];
	}
	newTab[size] = val;

	delete[] myArray;
	size = newSize;
	myArray = newTab;
}
