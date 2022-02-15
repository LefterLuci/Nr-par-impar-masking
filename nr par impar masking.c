#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned char bit;
    int a;


    printf("Introduceti un nr. pentru a afla daca este par:\n");
    scanf("%d", &a);

    bit = a&1;

    if(bit==1)
    {
        printf("%d este nr. impar",a);
    }

    else
    {
        printf("%d este nr. par.",a);
    }

    return 0;
}
