#include "client.h"
#include <iostream>

Client::Client(int id, const std::string &prenom, const std::string &nom)
    : id(id), prenom(prenom), nom(nom) {}

int Client::getId() const {
    return id;
}

std::string Client::getPrenom() const {
    return prenom;
}

std::string Client::getNom() const {
    return nom;
}

std::vector<Produit>& Client::getPanier() {
    return panier;
}

void Client::ajouterAuPanier(const Produit &produit) {
    panier.push_back(produit);
}

void Client::viderPanier() {
    panier.clear();
}

void Client::supprimerDuPanier(const std::string &titre) {
    panier.erase(std::remove(panier.begin(), panier.end(), 
        [&titre](const Produit &p) { return p.getTitre() == titre; }), panier.end());
}

std::ostream& operator<<(std::ostream &os, const Client &c) {
    os << "Client: " << c.prenom << " " << c.nom << ", ID: " << c.id << "\nPanier:\n";
    for (const auto &p : c.panier) {
        os << p << std::endl;
    }
    return os;
}

