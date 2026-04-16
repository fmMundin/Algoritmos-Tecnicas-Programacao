#include <stdio.h>
#include <locale.h>

int main(void){
	const int tam =3;
	int i, qtd[tam], qtd_prod=0;
	float valor[tam],valor_prod=0;
	
	for (i=0;i<tam;i++){
		printf("Informe o valor do produto %d: ",i+1);
		scanf("%f",&valor_prod);
		valor[i]=valor_prod;
		
		printf("Informe a quantidade do produto %d: ",i+1);
		scanf("%d",&qtd_prod);
		qtd[i]=qtd_prod;
	}
	printf("\n==============================================\n");
	for (i=0;i<tam;i++){
		printf("Produto %d: Quantidade Vendiada: %d |  Valor Unitário: %.0f | Valor Total: %.0f \n", i+1, qtd[i], valor[i], valor[i]*qtd[i]);
		
	}
}
