#include <stdio.h>

int main(){
    int i = 0 ;

    // Short-circuit evaluation

    i && printf("You can't see me 1 !\n");

    i = 1;
    i || printf("You can't see me 2 !\n");


    i = 0;
    i || printf("You can't see me 3 !\n");

    i = 1;
    i && printf("You can't see me 4 !\n");

    return 0;
}