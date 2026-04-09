#include <stdio.h>
#include <locale.h>

int main (void){
	int i,idade;
	int qtd_maioridade = 0;
	for (i=1;i<=5;i++){
		printf("Informe sua idade:");
		scanf("%d",&idade);
		if (idade >= 18){
			qtd_maioridade++;
		}
	}
	printf("A quantidade de pessoas com maioridade é: %d", qtd_maioridade);
}
