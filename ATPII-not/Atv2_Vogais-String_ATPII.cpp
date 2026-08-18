#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogais(char str[]);

int main (void){
	char cadeia[] = {'N','A','V','I','O','\0'};
	int ret;
	ret = vogais(cadeia);
	printf("%d",ret);
}


int vogais(char string[]){

	int i, cont=0;
	char caracter;
	
	for ( i=0 ; i<=strlen(string) ; i++){
		caracter = string[i];
		if (caracter == 'A'){
			cont++;
		}else
		if (caracter == 'E'){
			cont++;
		}else
		if (caracter == 'I'){
			cont++;
		}else
		if (caracter == 'O'){
			cont++;
		}else
		if (caracter == 'U'){
			cont++;
		}
	}
	return cont;

}
