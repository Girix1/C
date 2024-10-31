#include "stdio.h"

int main(void)
{
    /*
    char str[100];

    printf("zadej 10 znaku: ");
    fgets(str, 100, stdin);
    printf("zadano: \"%s\"", str);
    */

    int i, j, k, l;
    int kontrola;

    printf("zadejte 2 cela cisla: ");
    kontrola = scanf_s("%d %d", &i, &j);
    printf("kontola: %d\n", kontrola);
    printf("I: %d, J: %d\n", i, j);

    if (kontrola != 2)
    {
        printf("neco se nepovedlo.\n");
        //cisteni vstupu
        while((getchar()) != '\n');
    }

    printf("zadejte dalsi 2 cela cisla: ");
    kontrola = scanf_s("%d %d", &k, &l);
   

      if (kontrola != 2)
    {
        printf("neco se nepovedlo.\n");
        //cisteni vstupu
        while((getchar()) != '\n');
    }

    printf("kontola: %d\n", kontrola);
    printf("K: %d, L: %d\n", k, l);
    
    return 0;
}