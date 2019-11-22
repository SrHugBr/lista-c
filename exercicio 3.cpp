#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, reajuste;
	
		printf("Digite seu salario\n");
		scanf("\n%f",&salario);
		
		if (salario<=300){
		
		reajuste= salario*0.5;
		printf("\nSeu salario reajustado é :\n%0.3f:\n",reajuste);
	}
		if (salario>300){
		
		reajuste= salario*0.3;
		printf("\n Seu salario reajustado é :\n%0.3f:\n",reajuste);
	}
		system("pause");
		return 0;
	
}
