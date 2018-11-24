#include <stdio.h>
#include <stdlib.h>

int produto(int a, int b){
    int result;
    result = a*b;
    return result;
}
int main()
{
    int n1, n2, resultado;
    printf("Informe dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    resultado =  produto(n1, n2);
    printf(" O produto foi %d\n", resultado);
    return 0;
}
