#include <sstream>
#include "EquipeMoto.h"

EquipeMoto::EquipeMoto(string nomEquipe, string nomManager)
{
	this->nom = nomEquipe;

	//  Composition, donc instanciation du Manager...
	manager = new Personne(nomManager);

	//  Initialisation des pointeurs pour les pilotes (pas s�r de null en C++ ...)
	for (unsigned int i = 0; i < maxPilote; ++i)
	{
		pilotes[i] = nullptr;
	}
}

//constructeur par copie... n�cessaire car pointeur allou� dans les attributs
EquipeMoto::EquipeMoto(const EquipeMoto& org){
    this->nom = org.nom;
    for (unsigned  int i = 0; i < maxPilote; i++){
        pilotes[1] = org.pilotes[i];
    }
    manager = new Personne(org.manager->GetNom());
}

//op�rateur = n�cessaire pour la permutation
EquipeMoto& EquipeMoto::operator=(const EquipeMoto& org){
    if (this != &org){
        this->nom = org.nom;
        for (unsigned  int i = 0; i < maxPilote; i++){
            pilotes[1] = org.pilotes[i];
        }
        delete this->manager;
        manager = new Personne(org.manager->GetNom());
        return *this;
    }
}

EquipeMoto::~EquipeMoto()
{
	cout << "====> ~EquipeMoto() de " << this << ": " << this->nom << endl;

	//  Ne pas oublier de faire le delete pour le Manager instanci� dans le constructeur...
	delete manager;
}

void EquipeMoto::AddPilote(unsigned int rang, Personne* pilote)
{
	if (rang < maxPilote)
	{
		this->pilotes[rang] = pilote;
	}
}

//  Pour pouvoir �crire cout << VR46;
std::ostream& operator<<(std::ostream& os, const EquipeMoto& equipe)
{
	stringstream pilotesEquipe("");

	for (unsigned int i = 0; i < equipe.maxPilote; i++)
	{
		if (nullptr != equipe.pilotes[i])
			pilotesEquipe << "\n\t\tPilote n� " << i << ": " << *equipe.pilotes[i];
	}

	os << &equipe << " => " << equipe.nom << "\n\t\tManager: " << *equipe.manager << pilotesEquipe.str();
	return os;
}
