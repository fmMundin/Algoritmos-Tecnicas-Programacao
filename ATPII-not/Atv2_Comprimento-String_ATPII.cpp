#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	char cadeia[] = {};	
	int tamanho = 0;
	printf("Informe uma cadeia de caracteres: ");
	scanf("%s",cadeia);
	
	tamanho = strlen(cadeia);
	printf("Tamanho: %d", tamanho);
}

