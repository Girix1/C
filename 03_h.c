#include "stdio.h"

int main(void)
{
    /*
    int i1;
    int * pi1;
    double d1;
    double * pd1;
    char c1;
    char * pc1;

    //zjistim velikost v B
    int velikost1 = sizeof(i1);
    int velikost2 = sizeof(pi1);
    int velikost3 = sizeof(d1);
    int velikost4 = sizeof(pd1);
    int velikost5 = sizeof(c1);
    int velikost6 = sizeof(pc1);

    printf("velikost i1: %d\n", velikost1);
    printf("velikost pi1: %d\n", velikost2);
    printf("velikost d1: %d\n", velikost3);
    printf("velikost pd1: %d\n", velikost4);
    printf("velikost c1: %d\n", velikost5);
    printf("velikost pc1: %d\n", velikost6);

    unsigned int k1 = 3511514848;
    int k2 = (int) k1;
    printf("k2: %d\n", k2);
    printf("k1: %u\n", k1);
    */
    /*
    int prumer;
    int obvod;
    char str[80];

    printf("zadej prumer a obvod: ");
        scanf_s("%d %d", &prumer, &obvod);

        int * u1 = & prumer;

        printf("zadej prumer znovu: ");
        scanf_s("%d", u1);
        
        printf("zadej retezec znaku bez mezer: ");
        scanf("%s", str);

    printf("ulozeno prumer: %d\n", *u1);
    printf("ulozeno obvod: %d\n", obvod);
    printf("ulozeno obvod: %s\n", str);
    */
    int a;
    double r;
    double pi = 3.141592653589793;
    double b = 4.0/3;

    printf("%.15lf\n",pi);

    printf("zadej cislo ktere chces umocnit: ");
        scanf("%d", &a);

     a = a*a*a;

    printf("mocnina zadaneho cisla je: %d\n", a);

    printf("zadej polomer koule:");
    scanf("%lf", &r);

    r = r*r*r;
    printf("%.9lf\n", r);
    pi = pi*b;
    printf("%.9lf\n", pi);
    r = r*pi;
    
    printf("objem koule je: %lf cm3 \n", r);

    return 0;
}