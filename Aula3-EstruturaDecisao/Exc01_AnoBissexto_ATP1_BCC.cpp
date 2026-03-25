#include <stdio.h>
#include <locale.h>

int main (void){
	int ano;
	printf("Informe um ano: ");
	scanf("%d",&ano);
	
	if ((ano % 400 )== 0 || (ano%4)==0 && (ano%100 !=0)){
		printf("É ano bissexto");
	}
	else{
		printf("Não é bissexto");
	}
}
