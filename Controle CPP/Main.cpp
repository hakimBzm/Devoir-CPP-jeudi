#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    // Constructeur
    Boxeur(const std::string& nom, double poids) : nom(nom), poids(poids) {}

    // Méthode pour obtenir le nom (lecture seule)
    const std::string& getNom() const {
        return nom;
    }

    // Méthodes pour obtenir et définir le poids
    double getPoids() const {
        return poids;
    }

    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

int main() {
    // Exemple d'utilisation de la classe Boxeur
    Boxeur boxeur_1("Box_1", 75.0);
    std::cout << "Boxeur 1 : Nom = " << boxeur_1.getNom() << ", Poids = " << boxeur_1.getPoids() << "kg" << std::endl;

    boxeur_1.setPoids(80.0);
    std::cout << "Nouveau poids de Boxeur 1 : " << boxeur_1.getPoids() << "kg" << std::endl;

    return 0;
}
