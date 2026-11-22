#include <stdio.h>

struct Peserta
{
    char name[100];
    int age, score;
};

int main()
{
    int n;

    scanf("%d", &n);

    struct Peserta data[10];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", data[i].name);
        scanf("%d", &data[i].age);
        scanf("%d", &data[i].score);
    }

    int highest = 0;

    for (int i = 0; i < n; i++)
    {
        if (data[i].score > data[highest].score)
        {
            highest = i;
        }
    }
    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", data[highest].name, data[highest].score);
    return 0;
}