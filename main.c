#include <stdio.h>

int main(void)
{
    float numeroDaVerificare;

    printf("Determina se un numero è positivo o negativo\n");
    printf("Inserisci il numero da determinare\n");
    scanf("%f", &numeroDaVerificare);
    if (numeroDaVerificare > 0)
    {
        printf("Questo numero è positivo");
    }
    else
    {
        printf("Questo numero è negativo");
    }
    return 0;
}
