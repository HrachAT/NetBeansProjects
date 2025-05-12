#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    char chaine[] = "12345678000A";
    int i;
    ptrCar = chaine;
    ptrEntier = (int *) chaine;
    ptrReel = (float *) chaine;
    for (i = 0; i < 3; i++)
    {
        printf("ptrCar    = %p       *ptrCar    = %c\n", ptrCar, *ptrCar);
        printf("ptrEntier = %p       *ptrEntier = %d\n", ptrEntier, *ptrEntier);
        printf("ptrReel   = %p       *ptrReel   = %f\n", ptrReel, *ptrReel);
        ptrCar++;
        ptrEntier++;
        ptrReel++;
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

