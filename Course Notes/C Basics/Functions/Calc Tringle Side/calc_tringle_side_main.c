#include <stdio.h>
#include <math.h>

double calc_tringle_side(double a, double b);

int main() {
    double a, b;
    printf("\nEnter A side size :");
    scanf("%lf", a);
    printf("\nEnter B side size :");
    scanf("%lf", b);

    printf("\nThe size of C side is :", calc_tringle_side(a, b));
    return 0;
}

double calc_tringle_side(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}