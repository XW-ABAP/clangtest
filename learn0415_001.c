#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ;
    while(scanf("%d",&a))
    {
        /* code */
        if( 3 < a  && a < 10)
        {
            printf("a在3和10之间\n");
        }
        else
        {
            printf("a不在3和10之间\n");
        }
    }
    return 0;
}