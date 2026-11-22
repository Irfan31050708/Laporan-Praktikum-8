#include <stdio.h>

int main()
{
    struct peserta {
        char name[101];
        int age;
        int score;
    };

    struct peserta data;

    printf("Nama : ");
    scanf("%[^\n]", data.name);
    printf("Umur : ");
    scanf("%d", &data.age);
    printf("Skor : ");
    scanf("%d", &data.score);

    printf("\nData Peserta:\n");
    printf("Nama : %s\n", data.name);
    printf("Umur : %d tahun\n", data.age);
    printf("Skor : %d\n", data.score);
    
    return 0;
}
