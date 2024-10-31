#include "stdio.h"

/*
int nasob(int a, int b){
    int vysledek;
    vysledek = a*b;

return vysledek;
}

int main(void){
    int vyska = 10;
    int sirka = 20;
    int vysledek;
    nasob(vyska, sirka);
    printf("vysledek: %d\n", vysledek);

return 0;
}
*/

double fact(double z);

void main()
{
    double n, r, vysledek;
    printf("zadej cisla:\n");
    scanf("\n %lf %lf", &n, &r);
    vysledek = fact(n) / (fact(r) * fact(n - r));
    printf("\nvysledek = %.0lf", vysledek);
}

double fact(double z)
{
    int f = 1, i;
    if (z == 0)
     {
        return (f);
     }
    else
     {
        for (i = 1; i <= z; i++)
            {
            f = f * i;
            }
     }
    return (f);
}