#include "stdio.h"
#include <stdbool.h>

int main(void)
{
    /*
    int i=14;
    int j=4;

    printf("i:  %d j: %d i/j: %3d, i%%j:%3d\n",  i,  j,   i/j,   i%j );
    printf("i:  %d j: %d i/j: %3d, i%%j:%3d\n", -i, -j, -i/-j, -i%-j );
    printf("i:  %d j: %d i/j: %3d, i%%j:%3d\n",  i, -j,  i/-j,  i%-j );
    */
    /*
    int cas;
    float finance;
    char typUctu;
    float urok = 0;

    printf("zadejte zustatek: ");
    scanf_s("%f", &finance);
    printf("zadejte kolik let jste u banky: ");
    scanf_s("%d", &cas);
    printf("zadejte typ uctu: ");
    scanf_s(" %c", &typUctu, 1);

    if ((typUctu == 'A' || 'a') 
    && (finance > 10000) && (finance < 250000) && (cas > 2))
    {
        urok = 0.75;
    }
    else if ((typUctu == 'A' || 'a') && (cas < 2))
    {
        if (finance >= 250000)
            {
                urok = 0.75;
            }
        else if((finance > 150000) && (cas < 1) || (cas < 2))
            {
                urok = 0.5;
            }
    }
    else
    {
        if (typUctu != 'A' || 'a')
        {
            urok = 0.25;
        }
    }

    printf("vas procentni urok je: %f", urok);
    
    */
   bool user = true;
   bool update = true;
   bool program = true;

   if ((program == false) && (update == false) && (program == false))
   {
    printf("vypinam PC");
   }else if ((user == true) && (program == false)){
    printf("lockscreen");
   }else if (program == true)
   {
    printf("uloz si praci");
   }else if ((update == true) && (user == false))
   {
    printf("aktualizovat a vypnout");
   }
   


    return 0;
}

/*
!negace
&& konjkukce = oboje
|| = dijunkce = staci jedno
*/