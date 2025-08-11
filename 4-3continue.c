#include <stdio.h>
// for 
int main(){
    int i, total;
    for (size_t i = 0; i <= 100; i++)
    {
        /* code */
        if(i % 2 == 0)
        {
            continue;
        }
        total = total + i;
    }
    printf("total = %d", total);
    return 0;
}