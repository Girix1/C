/*
#include "stdio.h"

int funkce(int a, int b){
    int vysledek;
    vysledek = a+b;

return vysledek;
}

int main(void){
    int x = 10;
    int y = 20;
    int vysledek;

    funkce(x, y);
    printf("vysledek: %d\n", vysledek);

return 0;
}
*/
/*
#include "stdio.h"

int main(void){

int p = 8 765 432;
int r = -66;
int s = p%r;
int t = s;
s+=1;

printf("%d", t);
return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

char c; // znak
int i; // ordinální (ASCII) hodnota znaku
// převedeme znak na jeho ASCII hodnotu

// Převedeme ASCII hodnotu na znak
i = 39;
c = (char)i;
printf("%c", i);
	return (EXIT_SUCCESS);
}