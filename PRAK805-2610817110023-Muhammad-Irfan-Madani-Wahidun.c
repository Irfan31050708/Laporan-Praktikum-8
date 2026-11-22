#include <stdio.h>

struct Dompet
{
    char name[100];
    int balance;
};

void calculate(struct Dompet *ptr, char option, int amount)
{
    if (option == 'T')
    {
        ptr->balance = ptr->balance + amount;
        printf("Top up %d berhasil, saldo = %d\n", amount, ptr->balance);
    }
    else if (option == 'B')
    {
        if (ptr->balance >= amount)
        {
            ptr->balance = ptr->balance - amount;
            printf("Bayar %d berhasil, saldo = %d\n", amount, ptr->balance);
        }
        else
        {
            printf("Bayar %d gagal, saldo tidak cukup\n", amount);
        }
    }
}

int main()
{
    struct Dompet wallet;
    int n;

    scanf("%s %d", wallet.name, &wallet.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char option;
        int amount;

        scanf(" %c %d", &option, &amount);
        calculate(&wallet, option, amount);
    }

    printf("Saldo akhir %s = %d\n", wallet.name, wallet.balance);
    return 0;
}