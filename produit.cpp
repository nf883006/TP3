#include "produit.h"
#include <iostream>

Produit::Produit(const std::string &titre, const std::string &description, int quantite, double prix)
    : titre(titre), description(description), quantiteDisponible(quantite), prixUnitaire(prix) {}

std::string Produit::getTitre() const {
    return titre;
}

std::string Produit::getDescription() const {
    return description;
}

int Produit::getQuantiteDisponible() const {
    return quantiteDisponible;
}

double Produit::getPrixUnitaire() const {
    return prixUnitaire;
}

void Produit::setQuantiteDisponible(int quantite) {
    quantiteDisponible = quantite;
}

std::ostream& operator<<(std::ostream &os, const Produit &p) {
    os << "Produit: " << p.titre << ", Description: " << p.description 
       << ", Quantité: " << p.quantiteDisponible << ", Prix: " << p.prixUnitaire;
    return os;
}

