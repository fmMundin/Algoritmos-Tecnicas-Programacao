#include <stdio.h>
#include <locale.h>

int main(void){
	
	int x,ex;
	int i = 1;
	setlocale(LC_ALL,"");
	
	printf("Informe a base:");
	scanf("%d",&x);
	printf("Informe o expoente:");
	scanf("%d",&ex);
	
	if (ex > 0){
		while(ex> 0 ){
			i = i * x;
			ex--;
		}	
		printf("Resultado: %d",i);
	} else if( ex <0 ){
		while(ex< 0){
			i = i * x;
			ex++;
		}
		printf("Resultado: 1/%d ou %f",i);
	} else {
		i = 1;
		printf("Resultado: %d",i);
	}
	
}
