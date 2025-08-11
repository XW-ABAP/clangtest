#include <stdio.h>
// for 
int main(){
    int i, total;
    for (i = 0; i <= 100; i++)
    {
        /* code */
        if(total > 2000)
        {
            break;
        }
        total = total + i;
    }
    printf("total = %d,i = %d\n", total,i);
    return 0;
}