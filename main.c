#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;
    int resultado;

    printf("Informe dois numeros:\n");
    scanf("%d %d", &a, &b);

    resultado = somaValores(a, b);

    printf("Valor de C eh %d\n", resultado);

    return 0;
}

int somaValores(int a, int b){
    int *p, *q, c;
    p = &a;
    q = &b;
    c = *p + *q;
    return c;
}
