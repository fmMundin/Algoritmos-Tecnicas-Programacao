#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
	char cadeia_input[] = {'A','R','?','A','R','A','\0'};
	char cadeia[100],cadeia_inversa[100], cadeia_inversa2[100];
	int i,j=0, k=0,m;
	char whitelist[] = {'A','B','C','D','E','F','G','H','I','J','K',
	'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0','Ç','\0'};
	
	for (m =0 ; m<=strlen(cadeia_input) ; m++){
		for ( i=0 ; i<=strlen(whitelist) ; i++){
		if (cadeia_input[m] == whitelist[i] ){
			cadeia[j] = cadeia_input[m];
			j++;
		}
	}
	}
	
	
	printf("CAdeia input: %s",cadeia_input);
	printf("\nCAdeia tratada: %s",cadeia);
	j =0;
	
	for ( i=strlen(cadeia)-1 ; i>=0 ; i--){
		cadeia_inversa[j] = cadeia[i];
		j++;
	}
	cadeia_inversa[strlen(cadeia)] = '\0';
	printf("\nCadeia Inversa: %s",cadeia_inversa);
	
	for (i=0 ; i<=strlen(cadeia) ; i++){
		if (cadeia_inversa[i] == cadeia[i]){
			
			k += 0;
		}else{
			
			k+=1;
		}
	}
	if (k>=1){
		printf("\nNao e Palindromo");
	}else{
		printf("\nPaece um palindomo");
	}
	
}
