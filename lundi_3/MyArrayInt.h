#pragma once

class MyArrayInt
{
private:
	unsigned int size;
	int* myArray; // Le tableau d'entier encapsulé... int myArray[size]

public:
	MyArrayInt(unsigned int size);
	MyArrayInt();
	virtual ~MyArrayInt();

	unsigned int GetSize() { return size; }
	unsigned int GetSize() const { return size; }
	int* GetMyArray() { return myArray; }
	int* GetMyArray() const { return myArray; }

	void Fill(int val);
	int& operator[](const unsigned int& index);
	void AddItem(int val);
};

