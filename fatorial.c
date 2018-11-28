#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    int i,  fat;
    fat = 1;
    for(i=1; i<=n; i++){
        fat = fat*i;
    }
    return fat;
}
int main()
{
    int n, a;

    printf("Informe um numero nao negativo:\n");
    scanf("%d", &n);

    a = fatorial(n);

    printf("O fatorial de %d eh %d\n", n, a);
    return 0;
}
