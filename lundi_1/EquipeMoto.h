#ifndef LUNDI_1_EQUIPEMOTO_H
#define LUNDI_1_EQUIPEMOTO_H


#include <string>
#include "Personne.h"

class EquipeMoto {
private:
    std::string nom;
    Personne* manager;

    Personne* lesPilotes[3];
public:
    EquipeMoto(std::string nom, std::string nomManager);
    EquipeMoto();
    EquipeMoto(const EquipeMoto& source);

    EquipeMoto& operator=(const EquipeMoto& source);

    virtual ~EquipeMoto();
    std::string GetNom() {return this -> nom;}
    std::string GetNom() const {return this -> nom;}
    Personne* GetManager() {return this -> manager;}
    Personne* GetManager() const {return this -> manager;}

    void AddPilote(unsigned int rang, Personne* pilote);
    Personne** GetLesPilotes() {return lesPilotes;}

};


#endif //LUNDI_1_EQUIPEMOTO_H
