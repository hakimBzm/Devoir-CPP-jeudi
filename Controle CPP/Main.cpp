#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    Boxeur(const std::string& nomBoxeur, double poidsBoxeur)
        : nom(nomBoxeur), poids(poidsBoxeur) {
    }

    std::string getNom() const {
        return nom;
    }

    double getPoids() const {
        return poids;
    }

    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

class Combat {
private:
    std::string niveau;

public:
    Combat(const std::string& niveauCombat)
        : niveau(niveauCombat) {
    }

    std::string getNiveau() const {
        return niveau;
    }
};
