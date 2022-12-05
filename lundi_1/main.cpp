#include <iostream>
#include "Personne.h"
#include "EquipeMoto.h"

using namespace std;

//passage de paramètre par référence
void fonction_1(Personne param){
    cout << "Dans la fonction_1 : " << endl;
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl;

    param.SetNom("Modifié...");
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl << endl;
}

//passage de paramètre par adresse
void fonction_2(Personne& param){
    cout << "Dans la fonction_2 : " << endl;
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl;

    param.SetNom("Modifié...");
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl << endl;
}

//passage de paramètre par ???????
void fonction_3(Personne* param){
    cout << "Dans la fonction_2 : " << endl;
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl;

    param->SetNom("Modifié...");
    cout << "param, ard : " << &param << endl << "Nom : " << param.GetNom() << endl << endl;
}

int main() {
    cout << endl;

    //déclaration automatique
    Personne pers1("Dovi");
    cout << "pers1, adr : " << &pers1 << endl << "Nom : " << pers1.GetNom() << endl;

    cout << endl;

    // déclaration dynamique
    Personne* ptrPers2;     //pointeur sur une Personne
    ptrPers2 = &pers1;      // Initialisation du pointeur
    cout << "ptrPers2 : " << ptrPers2 << endl << "Nom : " << ptrPers2->GetNom() << endl;

    cout << endl;

    // instanciation dynamique dans le tas
    ptrPers2 = new Personne("Quarta");
    cout << "ptrPers2 : " << ptrPers2 << endl << "Nom : " << ptrPers2->GetNom() << endl;

    //passage de paramètre par référence
    fonction_1(pers1);
    cout << "Dans main : " << endl;
    cout << "pers1, adr: " << &pers1 << endl << "Nom : " << pers1.GetNom() << endl;
    cout << endl;

    //passage de paramètre par adresse
    fonction_2(pers1);
    cout << "Dans main : " << endl;
    cout << "pers"
            "1, adr: " << &pers1 << endl << "Nom : " << pers1.GetNom() << endl;
    cout << endl;
    //passage de paramètre par ???????
    fonction_2(pers1);
    cout << "Dans main : " << endl;
    cout << "pers1, adr: " << &pers1 << endl << "Nom : " << pers1.GetNom() << endl;
    cout << endl;

    EquipeMoto equipe1;
    cout << "equipe1, adr: " << &equipe1 << endl << "Nom : " << equipe1.GetNom() << endl;


    return 0;
}
