#pragma once
#include "Personne.h"

using namespace std;

class EquipeMoto
{
public:
	static const unsigned int maxPilote = 3;
	EquipeMoto(string nomEquipe, string nomManager);
	~EquipeMoto();
	string GetNom() { return this->nom; };
	void SetNom(string nom) { this->nom = nom; }
	void AddPilote(unsigned int rang, Personne* pilote);
	Personne* GetManager() { return manager; };
	friend std::ostream& operator<<(std::ostream& os, const EquipeMoto& equipe);

private:
	string nom;
	Personne* manager;		// pour la composition...
	Personne* pilotes[maxPilote];	// pour l'association...
};

