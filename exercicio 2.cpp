#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main (void)
{

int N0, N1, N2, N3, Soma;

printf("Digitar �1 numero");
scanf("%d", &N0);

printf("Digitar �2 numero");
scanf("%d", &N1);

printf("Digitar �3 numero");
scanf("%d", &N2);

printf("Digitar �4 numero");
scanf("%d", &N3);


if(N0>N1 && N0>N2 && N0>N3){

Soma = N1 + N2 + N3;

} 
else {

if(N1>N0 && N1>N2 && N1>N3);
Soma = N0 + N2 + N3;

if(N2>N0 && N2>N1 && N2>N3);
Soma = N0 + N1 + N3;

if(N3>N0 && N3>N1 && N3>N2);
Soma = N0 + N1 + N2;
}

printf("Soma dos menores �: %d" ,Soma);





}
