#include <iostream>
#include "magasin.h"
#include "produit.h"
#include "client.h"
#include "commande.h"

int main() {
    Magasin magasin;

    // Création de produits
    Produit produit1("PS4", "Console de jeu Sony", 10, 249.99);
    Produit produit2("Xbox One", "Console de jeu Microsoft", 8, 299.99);
    
    // Ajout des produits au magasin
    magasin.ajouterProduit(produit1);
    magasin.ajouterProduit(produit2);

    // Affichage des produits
    magasin.afficherProduits();

    // Création d'un client
    Client client1(1, "Dominique", "Ginhac");

    // Ajouter un produit au panier du client
    client1.ajouterAuPanier(produit1);
    
    // Affichage du client avec son panier
    std::cout << client1 << std::endl;

    // Création d'une commande
    std::vector<Produit> produitsCommandes = {produit1};
    Commande commande(client1, produitsCommandes, "Non validée");

    // Affichage de la commande
    std::cout << commande << std::endl;

    return 0;
}

