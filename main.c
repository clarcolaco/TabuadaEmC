#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int a, indice, total;
	
	printf("Ola, tudo bem? \nDigite um valor qualquer para a tabuada! Numero: ");
	scanf("%d", &a);
	
	for(indice = 0; indice < 11; indice ++){
		
		total = a * indice;
		printf("%d * %d = %d \n", a, indice, total);
		
	}
	
	
	return 0;
}