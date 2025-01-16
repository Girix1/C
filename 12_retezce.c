#include "stdio.h"
#include "string.h"
#include "ctype.h"
#pragma warning(disable : 4996)

int main()
{
   /*
    char b[50] = "";
    char c[50];

    strncpy(c,b, 50);
    printf("%s \n", c);

    int vysledek = strcmp(b, "stredni prumyslova skola mb");
    printf("porovnani: %d \n ", vysledek);
   
 
    char a[50] = "stredni prumyslova skola";
    int i;
    printf("retezec: %s\n",a);
    printf("zadejte pozici: ");
    int delka = strlen(a);
    do
    {
        int kontrola = scanf("%d",&i);
    if (kontrola !=1){
        {
        while (getchar() != '\n');
        printf("chybny vstup, zkuste znovu. \n");    
        }
        
    }else{
        printf("na pozici %d je znak '%c'. \n");
        break;
    }
    } while (1);
    
    

    printf("na pozici %d je znak '%c'.\n", i, a[i]);   
    */
   char retezec[1000];
   char cisla[1000];
   char ostatni[1000];

    int j=0;
    int k=0;
    printf("zadej retezec: ");
    scanf("%s", retezec);

    int delka = strlen(retezec);

    for (int i = 0; i < delka; i++)
    {
        if (isdigit((unsigned char)retezec[i])) 
        {
            cisla[j++] = retezec[i];
        }else{
            ostatni[k++] = retezec[i];
        }
        
    }
    cisla[j] = '\0';
    ostatni[k] = '\0';


    printf("cisla: %s\n", cisla);
    printf("ostatni: %s\n", ostatni);

    return 0;
}