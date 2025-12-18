#include "bibliotheque.h"
#include <stdio.h>
#include <math.h>

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
    unsigned int result = 1;

    while ( value > 1 ) {
        result *= value;
        value --;
    }
    
    return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
    if ( pow == 0 ) return 1;
    if ( pow == 1 ) return value;

    int accumulator = 1;

    while( pow > 0 ) {
        accumulator *= value;
        pow--;
    }
    
    return accumulator;
}

// Définition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Définition d'une fonction qui vérifie si un entier est premier ou non.
void isPrimeNumber(int n) {
    // Notons que un nombre premier a exactement deux diviseurs (1 et lui-meme)
    // Alors 1 n'est pas un nombre premier puisque 1 a juste un seul diviseur (lui-même == 1).

    if (n <= 1) {
        printf("%d n'est pas un nombre premier.\n", n);
        return;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d n'est pas un nombre premier.\n", n);
            return;
        }
    }

    printf("%d est un nombre premier.\n", n);
}

// Définition d'une fonction de resolution d'équation de second dégré dans R.
void solverEquation(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("On a une infinité de solution dans R.\n");
            } else {
                printf("Pas de solution.\n");
            }
        } else {
            printf("La solution est x = %.2f\n", -c / b);
        }
        return;
    }

    double delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Pas de solution dans R.\n");
        return;
    }

    if (delta == 0) {
        double x = -b/(2 * a);
        printf("On a une solution double x = %.2f\n", x);
    } else {
        double sqrtDelta = sqrt(delta);
        double x1 = (-b - sqrtDelta)/(2 * a);
        double x2 = (-b + sqrtDelta)/(2 * a);
        printf("On a deux solutions x1 = %.2f et x2 = %.2f\n", x1, x2);
    }
}

// Définition d'une fonction qui calcul la distance entre deux points.
double distancePoint(Point a, Point b) {
    Point diff;

    diff.x = b.x - a.x;
    diff.y = b.y - a.y;

    double distance = sqrt(pow(diff.x, 2) + pow(diff.y, 2));

    return distance;
}
