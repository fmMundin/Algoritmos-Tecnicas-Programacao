#include <stdio.h>
int main (void){
	const int linhas=2, colunas=2; //trocar aq por 10x20
	int valores[linhas][colunas],i,j,soma[2],somaLinha=0,result[linhas][colunas];
	
	for (i=0;i<linhas;i++){
		for (j=0;j<colunas;j++){
			scanf("%d",&valores[i][j]);
		}
	}
	for (i=0;i<linhas;i++){
		for(j=0;j<linhas;j++){
			somaLinha+=valores[i][j];
		}
		soma[i]=somaLinha;
		printf("Soma da linha: %d \n",soma[i]);		
		somaLinha=0;
	}
	for (i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			result[i][j]=valores[i][j]*soma[i];
		}
	}
	
	for (i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	
}
