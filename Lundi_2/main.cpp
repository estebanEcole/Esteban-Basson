#include <iostream>
#include "EquipeMoto.h"
#include "Personne.h"

template < typename T > void permute(T& Equipe1, T& Equipe2){
    T temp = Equipe1;
    Equipe1 = Equipe2;
    Equipe2 = temp;
}

using namespace std;

int main() {
    cout << endl << "*** PROGRAM START ***" << endl;

    cout << endl;


    EquipeMoto *YamahaRacingTeam;
    YamahaRacingTeam = new EquipeMoto("Yamaha", "Massimo Meregalli");
    auto Quartararo = new Personne("Fabio Quartararo");
    auto Morbidelli = new Personne("Franco Morbidelli");
    YamahaRacingTeam -> AddPilote(1, Quartararo);
    YamahaRacingTeam -> AddPilote(2, Morbidelli);

    cout << endl;

    EquipeMoto *DucatiRacingTeam;
    DucatiRacingTeam = new EquipeMoto("Ducati", "Luigi Dall'Igna");
    auto Miller = new Personne("Jack Miller");
    auto Bagnaia = new Personne("Pecco Bagnaia");
    DucatiRacingTeam -> AddPilote(1, Miller);
    DucatiRacingTeam -> AddPilote(2, Bagnaia);

    cout << endl << "===== avant permutation =====" << endl;
    cout << *YamahaRacingTeam << endl;
    cout << *DucatiRacingTeam << endl;

    permute(*YamahaRacingTeam, *DucatiRacingTeam);

    cout << endl << "===== après permutation =====" << endl;
    cout << *YamahaRacingTeam << endl;
    cout << *DucatiRacingTeam << endl;

    //delete
    delete YamahaRacingTeam;
    delete Quartararo;
    delete Morbidelli;
    delete DucatiRacingTeam;
    delete Miller;
    delete Bagnaia;

    cout << endl << "*** PROGRAM END ***" << endl;
    return 0;
}
