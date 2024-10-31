#include "stdio.h"
#include <math.h>

int main(void)
{

    /*
     double num;
     int kontrola;

     printf("zadejte cislo:");
     kontrola = scanf_s("%lf", &num);

     if (kontrola == 0)
     {
         printf("chyba");
     }
     else if((kontrola == 1) && (num<0)){

         printf("absolutni hodnota je: %lf", num *(-1));
     }else if ((kontrola == 1) && (num>=0))
     {
         printf("absolutni hodnota je: %lf", num);
     }
     else
     {
         printf("chyba");
     }




    double a, b, c, s, obsah;
    printf("zadejte starnu a:");
    scanf("%lf", &a);
    printf("zadejte starnu b:");
    scanf("%lf", &b);
    printf("zadejte starnu c:");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        s = (a + b + c) / 2;
        obsah = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("obsah je:%lf ", obsah);
    }
    else
    {
        printf("chyba");
    }

    

    int rok;
    printf("zadejte rok:\n");
    scanf_s("%d", &rok);

    if (rok % 4 == 0)
    {
        if ((rok % 100 != 0) || (rok % 400 == 0))
        {
            printf("rok je prestupny");
        }
        else
        {
            printf("neni prestupny");
        }
    }
    else
    {
        printf("neni prestupny");
    }
    */
    int a = 10;
    printf("start programu\n");
    while (a>5){
        printf("%d",a);
    }
    
    
    return 0;
}