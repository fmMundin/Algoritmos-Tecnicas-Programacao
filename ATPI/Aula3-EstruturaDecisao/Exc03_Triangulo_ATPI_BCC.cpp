#include <stdio.h>
#include <locale.h>

int main (void){
	float l1,l2,l3;
	printf("Informe o lado 1: ");
	scanf("%f",&l1);
	
	printf("Informe o lado 2: ");
	scanf("%f",&l2);
	
	printf("Informe o lado 3: ");
	scanf("%f",&l3);
	
	if ((l1 < (l2 +l3)) && (l2< (l1+l3)) && (l3< (l1+l2)) ){
		printf("É um triangulo!!");
		
		if (l1 == l2 && l2 == l3 ){
			printf("É um triÂngulo Equilatero");
		}
		else if ((l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l3 && l3 != l1) ){
			printf("É um triangulo Isosceles");
		}
		else {
			printf("É um triangulo Escaleno");
		}
	}
	else {
		printf("Não eh um triangulo :(");
	}
}
