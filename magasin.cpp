#include "magasin.h"
#include <iostream>

void Magasin::ajouterProduit(const Produit &p) {
    _produits.push_back(p);
}

void Magasin::afficherProduits() const {
    for (const auto &p : _produits) {
        std::cout << p << std::endl;
    }
}

Produit* Magasin::getProduitByTitre(const std::string &titre) {
    for (auto &p : _produits) {
        if (p.getTitre() == titre) {
            return &p;
        }
    }
    return nullptr;
}

void Magasin::ajouterClient(const Client &c) {
    _clients.push_back(c);
}

Client* Magasin::getClientById(int id) {
    for (auto &c : _clients) {
        if (c.getId() == id) {
            return &c;
        }
    }
    return nullptr;
}

void Magasin::ajouterCommande(const Commande &commande) {
    _commandes.push_back(commande);
}

void Magasin::afficherCommandes() const {
    for (const auto &cmd : _commandes) {
        std::cout << cmd << std::endl;
    }
}

