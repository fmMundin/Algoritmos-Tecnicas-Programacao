#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	
	char cadeia[] = {'F','A','B','I','O','\0'};
	char caracter;
	int i;
	
	for( i=strlen(cadeia) ; i >= 0 ; i--){
		caracter = cadeia[i];
		printf("%c",caracter);
	}
}
