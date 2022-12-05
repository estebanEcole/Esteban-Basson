#include "Personne.h"

using namespace std;

Personne::Personne(string nom)
{
	this->nom = nom;
}

std::ostream& operator<<(std::ostream& os, const Personne& personne)
{
	os << &personne << " => " << personne.nom;
	return os;
}
