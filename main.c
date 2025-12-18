#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"

int main( void ) {
    int choice = 0;
    
    do {
        printf("\n--- LISTE DES FONCTIONS ---\n");
        printf("1. Puissance\n");
        printf("2. Factorielle\n");
        printf("3. Permutation\n");
        printf("4. Nombre Premier\n");
        printf("5. Equation Second Degre\n");
        printf("6. Distance 2 Points\n");
        printf("0. Quitter\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 2: {
                int n;
                printf("Entrez un nombre positif : ");
                scanf("%d", &n);
                int result = fact( n );
                printf( "%d! == %d\n", n, result );
                break;
            }
            case 1: {
                int val;
                int p;
                printf("Soit l'expression a^b.\n");
                printf("Entrez a : ");
                scanf("%d", &val);
                printf("Entrez b : ");
                scanf("%d", &p);
                int result = power( val, p );
                printf("%d^%d == %d\n", val, p, result);
                break;
            }
            case 3: {
                int a, b;
                printf("Entrez deux entiers a et b : \n");
                printf("Entrez a : ");
                scanf("%d", &a);
                printf("Entrez b : ");
                scanf("%d", &b);
                printf("Avant: a=%d, b=%d\n", a, b);
                permutation(&a, &b);
                printf("Apres: a=%d, b=%d\n", a, b);
                break;
            }
            case 4: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                isPrimeNumber(n);
                break;
            }
            case 5: {
                double a, b, c;
                printf("Soit l'equation ax^2 + bx + c = 0.\n");
                printf("Entrez a : ");
                scanf("%lf", &a);
                printf("Entrez b : ");
                scanf("%lf", &b);
                printf("Entrez c : ");
                scanf("%lf", &c);
                solverEquation(a, b, c);
                break;
            }
            case 6: {
                Point p1, p2;
                printf("Soit le point a(x1, y1).\n");
                printf("Entrez x1 : ");
                scanf("%lf", &p1.x);
                printf("Entrez y1 : ");
                scanf("%lf", &p1.y);
                printf("Soit le point b(x2, y2).\n");
                printf("Entrez x2 : ");
                scanf("%lf", &p2.x);
                printf("Entrez y2 : ");
                scanf("%lf", &p2.y);
                printf("La distance est : %.2f\n", distancePoint(p1, p2));
                break;
            }
            case 0:
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choice != 0);

    return EXIT_SUCCESS;
}
