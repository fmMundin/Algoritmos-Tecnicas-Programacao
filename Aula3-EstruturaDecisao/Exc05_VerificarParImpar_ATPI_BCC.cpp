#include <stdio.h>
#include <locale.h>

int main (void){
	int num;
	printf("Informe um número: ");
	scanf("%d",&num);
	
	if (num %2 ==0){
		printf("par");
	} else {
		printf("impar");
	}
}
