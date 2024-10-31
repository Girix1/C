#include "stdio.h"

int main(void)
{
    /*
    char str[100];

    printf("zadej 10 znaku: ");
    fgets(str, 100, stdin);
    printf("zadano: \"%s\"", str);
    */

    int i, j, k;
    int kontrola;

    printf("zadejte 3 cisla v HEX: ");
    kontrola = scanf_s("%x %x %x", &i, &j, &k);
    printf("kontola: %x\n", kontrola);
    

    if (kontrola != 3)
    {
        printf("neco se nepovedlo.\n");
        // cisteni vstupu
        while ((getchar()) != '\n')
            ;
    }else{
        printf("I: %x, J: %x, K: %x\n", i, j, k); 
    }
    
   
    
    return 0;
}