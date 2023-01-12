#include <stdio.h>
int main()
{
    int n, soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma+=n;
    }
    printf("A soma dos 5 numeros e %d", soma);
    return 0;
    
}