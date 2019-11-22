#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main (void)
{

int n1, n2, n3, soma, media, produto;

printf("Digitar primeiro numero\n");
scanf("\n%d", &n1);

printf("Digitar segundo numero\n");
scanf("\n%d", &n2);

printf("Digitar terceiro numero\n");
scanf("\n%d", &n3);

soma = n1+n2+n3;
media = (n1+n2+n3)/3;
produto = n1*n2*n3;

printf("\n O resultado da soma é: %d",soma );
printf("\n O resultado da media é: %d",media );
printf("\n O resultado do produto é :%d",produto );

}
