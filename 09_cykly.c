#include "stdio.h"
#include "math.h"

int main()
{
    /*
    float a;
    float i;
    float n = 1;
    printf("zadej cislo:");
    scanf_s("%f", &a);

    for (i = 1; i <= a; i++)
    {
        n = n*i;
    }
    printf("%.0f",n);
    */

    int velikost;
    printf("zadej velikost ");
    scanf("%d", &velikost);

    int i = 0;
    
    for (; i * 2 < velikost; i++){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        printf("%d\n", i);
    }
    for (; i < velikost; i++){
        for (int k = i; k< velikost-1; k++){
            printf(" ");
        }
        printf("%d\n", i);
    }
    return 0;
}