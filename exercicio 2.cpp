#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main (void)
{

int N0, N1, N2, N3, Soma;

printf("Digitar º1 numero");
scanf("%d", &N0);

printf("Digitar º2 numero");
scanf("%d", &N1);

printf("Digitar º3 numero");
scanf("%d", &N2);

printf("Digitar º4 numero");
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

printf("Soma dos menores é: %d" ,Soma);





}
