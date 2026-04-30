#include <stdio.h>
int main (void){
	int Notas[2][2];
	int i = 0, j =0;
	
	for (i=0;i<2;i++){
		for (j=0;j<2; j++){
			scanf("%f",&Notas[i][j]);
		}
	}
	
	for (i=0;i<2;i++){
		for (j=0;j<2; j++){
			printf("%f",Notas[i][j]);
		}
	}
}
