#include "EquipeMoto.h"
#include <string>

EquipeMoto::EquipeMoto(std::string nom, std::string nomManager) {
    this -> nom = nom;
    this -> nom = nomManager;
}

EquipeMoto::~EquipeMoto() {
    cout << "--> ~EuquipeMoto() de " << this << endl;

}