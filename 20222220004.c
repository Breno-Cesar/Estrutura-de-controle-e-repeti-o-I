#include <stdio.h>
int main()
{
    int n, max = -2147483648, min = 2147483647; 
    int cont = 1;
    
    while(cont<=20){
        printf("Insira um numero numero: ");
        scanf("%d", &n);
        while(n < 0)
        { 
            printf("Por favor insira um numero positivo: ");
            scanf("%d", &n);
        }

        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
        cont++;
    }

    printf("O maior numero e: %d\n", max);
    printf("O menor numero e: %d\n", min);

    return 0;
}
    
