#include <stdio.h>

int main()
    {
        char znak;
        printf("Podaj znak: ");
        znak = getchar();
        printf("znak: %c, kod ASCII: %i", znak, znak);


        return 0;
    }