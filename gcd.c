/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdio.h>         // Correction: nécessaire pour printf
#include <stdlib.h>        // Inclus la bibliothèque standard pour pouvoir utiliser atoi (conversion string -> int)
#include <string.h>        // Inclus la bibliothèque pour les fonctions sur les chaînes (pas utilisée ici mais présente)

int gcd(int a, int b) {    // Déclare la fonction gcd qui prend 2 entiers a et b et retourne un entier (leur PGCD)
  int r;                   // Correction: déclarer la bonne variable (r et pas k)
  while (b != 0) {         // Tant que b n’est pas nul (condition de fin de l’algorithme d’Euclide)
    r = a % b;             // Calcule le reste de la division entière de a par b
    a = b;                 // On remplace a par b
    b = r;                 // Correction: mauvais calcul du reste (r = b / b = b % a / a = r)
    
    
  }
  return a;                // Quand b vaut 0, a contient le PGCD, on le retourne
}


int main(int argc, char* argv[]) {  // Fonction principale : argc = nombre d’arguments, argv = tableau des arguments
    if (argc <= 2) {       // Vérifie qu’au moins 2 arguments sont passés (les deux nombres dont on veut le PGCD)
        return -1;         // Si pas assez d’arguments, quitte le programme avec code d’erreur -1
    }

    int a = atoi(argv[1]);          // Convertit le premier argument (argv[1]) en entier et le stocke dans a
    int b = atoi(argv[2]);          // Convertit le deuxième argument (argv[2]) en entier et le stocke dans b
 
    int result = gcd(a, b);         // Appelle la fonction gcd avec a et b, stocke le résultat dans result

    printf("%d\n", result);  // Affiche le PGCD à l’écran (sans +5 pour que le test automatique fonctionne)
    

    return 0;                // Termine le programme avec succès (code 0)
  
}
