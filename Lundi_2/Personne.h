#pragma once
#include <iostream>

using namespace std;

class Personne
{
private:
	string nom;

public:
	Personne(string nom);
	string GetNom() { return this->nom; };
	void SetNom(string nom) { this->nom = nom; }
	friend std::ostream& operator<<(std::ostream& os, const Personne& personne);
};

