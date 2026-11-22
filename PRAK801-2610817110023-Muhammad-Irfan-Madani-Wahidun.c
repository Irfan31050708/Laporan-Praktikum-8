#include <stdio.h>

int main()
{
    int variable;
    int *p = &variable;

    scanf("%d", &variable);

    printf("Nilai variabel = %d\n", variable);
    printf("Alamat variabel = %p\n", p);
    printf("Nilai melalui pointer = %d\n", *p);

    *p = *p * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", variable);
    return 0;
}