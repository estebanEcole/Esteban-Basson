#ifndef LUNDI_1_PERSONNE_H
#define LUNDI_1_PERSONNE_H

class Personne {
private:
    std::string nom;
public:
    Personne(std::string nom);
    virtual ~Personne();
    std::string GetNom() {return this->nom; }
    void SetNom(std::string nom);
};

#endif //LUNDI_1_PERSONNE_H
