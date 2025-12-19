#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H

typedef struct {
    double x;
    double y;
} Point;

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

// Définition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b);

// Définition d'une fonction qui vérifie si un entier est premier ou non.
void isPrimeNumber(int n);

// Définition d'une fonction de resolution d'équation de second dégré dans R.
void solverEquation(double a, double b, double c);

// Définition d'une fonction qui calcul la distance entre deux points.
double distancePoint(Point a, Point b);

// Définition d'une fonction qui affiche les éléments d'un tableau.
void arrayListing();

#endif
