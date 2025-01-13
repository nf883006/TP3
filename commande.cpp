#include "commande.h"
#include <iostream>

Commande::Commande(const Client &client, const std::vector<Produit> &produits, const std::string &statut)
    : client(client), produits(produits), statut(statut) {}

void Commande::validerCommande() {
    statut = "Validée";
}

std::ostream& operator<<(std::ostream &os, const Commande &cmd) {
    os << "Commande pour: " << cmd.client.getPrenom() << " " << cmd.client.getNom()
       << "\nStatut: " << cmd.statut << "\nProduits:\n";
    for (const auto &p : cmd.produits) {
        os << p << std::endl;
    }
    return os;
}

