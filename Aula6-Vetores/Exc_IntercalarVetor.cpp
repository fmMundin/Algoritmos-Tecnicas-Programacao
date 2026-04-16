#include <stdio.h>

int main(void){
	const int tam = 5;
	int vet1[tam]={1,3,5,7,9},vet2[tam]={2,4,6,8,10},vet3[tam*2],i=0,j=0;
	
	for (i=0;i<tam;i++){
		vet3[j]=vet1[i];
		j++;
		vet3[j]=vet2[i];
		j++;
	}
	for (i=0;i<tam*2;i++){
		printf("%d, ",vet3[i]);
	}
	
}

