//
// Auteur : Grégoire Rista
// Date : 2024-09-14
// Description : Programme qui affiche la liste des nombres premiers entre 2 et un nombre saisi par l'utilisateur
//
#include <iostream>

int main() {
    char user_choice; // Variable pour stocker le choix de l'utilisateur

    do {
        // Déclaration des variables
        int user_number = 0;

        // Vérification de la valeur saisie utilisateur entre 2 et 1000
        do {
            std::cout << "Entrez une valeur entiere comprise entre 2 et 1000 : ";
            std::cin  >> user_number;
        } while (user_number < 2 || user_number > 1000);


        // Sélectionne tous les nombres entre 2 et user_number
        std::cout << "Voici la liste des nombres premiers :" << std::endl;


        for (int i = 2; i <= user_number; i++) {
            int divisor_number = 0;  // Réinitialisation du nombre de diviseurs pour chaque nombre i

            // Compte le nombre de diviseurs pour le nombre actuel i
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    divisor_number++;
                }
            }

            // Affiche le nombre s'il n'a que 2 diviseurs (c'est un nombre premier)
            if (divisor_number == 2) {
                std::cout << '\t' << i;
            }
        }

        do {
            // Demander à l'utilisateur s'il veut recommencer
            std::cout << "\nVoulez-vous recommencer ? [O/N] : ";
            std::cin  >> user_choice;
        } while (user_choice != 'O' && user_choice != 'o' && user_choice != 'N' && user_choice != 'n');

    } while (user_choice == 'O' || user_choice == 'o'); // Recommence si l'utilisateur entre 'O' ou 'o'
    return 0;
}