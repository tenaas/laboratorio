#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Informe dois numeros:\n");
    scanf("%d %d", &a, &b);

    printf("\n\nAntes da troca %d %d\n\n", a, b);
    trocarVariavel(a, b);

    return 0;
}

void trocarVariavel(int a, int b){
    int aux, *p, *q;
    p = &a;
    q = &b;
    aux = *p;
    a = *q;
    b = aux;

    printf("\n\nDepois da troca\n\n %d %d", a, b);

}
