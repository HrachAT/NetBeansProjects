#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
    return x*x - 2;
}

double df(double x){
    return 2*x;
}

void executer(double (*fonction)(double), double a)
{
    double res = fonction (a);
    printf(" resultat : %f\n", res);
}

double newton(double f, double (*derive)(double), double a, double e, int *iterations)
{
    double delta = 1.0;
    int compteur = 0;
    double x;
    
    while (delta > e){
        x = -f(a) / derive(a) + a;
        delta = fabs(x-a);
        printf("%lf %lf\n", x, delta);
        a = x;
        compteur++;
    }
    
    *iterations = compteur;
    return x;
}

int main(int argc, char** argv) {
    executer(&f, 2);
    executer(&df, 2);
    executer(&f, 3);
    executer(&df, 3);
    
    return (EXIT_SUCCESS);
}
