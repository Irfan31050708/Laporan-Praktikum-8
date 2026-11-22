#include <stdio.h>

void swap (int *p, int *q)
{
    int swap = *p;
    *p = *q;
    *q = swap;
}

int main()
{
    int chair1, chair2;

    scanf("%d %d", &chair1, &chair2);

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", chair1, chair2);

    swap(&chair1, &chair2);

    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", chair1, chair2);

    return 0;
}