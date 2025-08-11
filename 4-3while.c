#include <stdio.h>

int main() {
    int i, total = 0;
    while (i <= 100)
    {
        total = total + i;
        i++;
    }
    printf("total =%d\n", total);
    return 0;

    
}