#include <stdio.h>
int main()
{
    int n, soma=0;
    for (int i = 1; i <=50; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n%2!=0 && n>100 && n<200)
        {
            soma+= n;
        }
        
    }
   printf("A soma dos numeros impares e igual a %d", soma); 

}