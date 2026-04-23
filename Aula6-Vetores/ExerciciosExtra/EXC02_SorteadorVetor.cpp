#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main (void){
	const int tam  = 10;
	int i=0, num =0, vet[tam], encontrado =0;
	setlocale(LC_ALL,"");
	srand(time(NULL));

	for (i=0; i<10; i++){
		num = rand()%21;
		vet[i]=num;
		
		printf("%d ",vet[i]);
	}
	
	printf("\nInforme um número:");
	scanf("%d",&num);
	
	for( i=0;i<10;i++){
		if (num == vet[i]){
			printf("Número encontrado na posição: %d", i+1);
			i = 11;
		}
	}
} 
