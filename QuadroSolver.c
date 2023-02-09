#include "Quadro.h"

int main() {

    Test_Runner();

    printf ("This program solves quadratic equations like ax^2+bx+c\nPlease print your coefficients separated by a space:\n");

    double a = NAN;
    double b = NAN, c = NAN;
    double x1 = NAN, x2 = NAN;

    Input_Function(&a, &b, &c);


	int nRoots = Quadro (a, b, c, &x1, &x2);

    Output_Function(&nRoots, &x1, &x2);

    return 0;
}
