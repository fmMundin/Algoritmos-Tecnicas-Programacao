#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char substring(char cadeia1[100], char cadeia2[100]);

int main (void){
	char cadeia1[] = {'A','R','A','R','A','Q','U','A','R','A','\0'};
	char cadeia2[] = {'A','R','A','R','A','S','\0'};
	char cadeia_resultado[100];
	cadeia_resultado[] = substring(cadeia1,cadeia2);
	printf("Substring em comum: %s",cadeia_resultado);
}

char substring (char cadeia1[100], char cadeia2[100]]){
	int i, j;
	
	for (i=0 ; i<strlen(cadeia1) ; i ++){
		if (cadeia1[i] == cadeia2[j]){
			cadeia_resultado[i] = cadeia1[i];
		}
		j++
	}
}
