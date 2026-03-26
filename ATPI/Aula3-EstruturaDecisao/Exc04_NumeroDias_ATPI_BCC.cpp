#include <stdio.h>
#include <locale.h>

int main (void){
	int mes,ano;
	printf("Informe o mês: ");
	scanf("%d",&mes);
	
	if (mes == 2){
		printf("Informe um ano: ");
		scanf("%d",&ano);
	
		if ((ano % 400 )== 0 || (ano%4)==0 && (ano%100 !=0)){
			printf("29");
		}
	else{
		printf("28");
	}
	}
	else{ 
		if ( mes <= 7 && mes %2 !=0){
			printf("31");	
		}
		else if (mes <=6 && mes %2 == 0 ){
			printf("30");
		}
		else if ((mes >=9 && mes %2 != 0)){
			printf("30");
		}
		else{
			printf("31");
		}
	}
}
