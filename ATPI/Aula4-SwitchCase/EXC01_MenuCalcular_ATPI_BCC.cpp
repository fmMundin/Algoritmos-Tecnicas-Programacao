#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
	char c;
	int a,b, oper;
	float result;
	setlocale(LC_ALL,"");
	
	printf("(+) Somar dois números\n (-) Subtrair dois números\n ");
	printf("(*) Multiplicar dois números\n (/) Dividir dois números\n (@) Raiz Quadrada de um número");
	
	printf("\nDigite a opção desejada: ");
	scanf(" %c",&c);
	printf("Informe o primeiro número: ");
	scanf("%d",&a);
	if(c != '@'){
		printf("Informe o segundo número: ");
	scanf("%d",&b);
	
	}
	if (c == '+'){
		oper = 1;
	} else if (c == '-'){
		oper = 2;
	} else if (c == '*'){
		oper = 3;
	} else if (c == '/'){
		oper = 4;
	} else if ( c == '@'){
		oper = 5;
	}
	switch (oper)
	{
		case 1: result = a + b; printf("Soma: %f",result); break;
		case 2: result = a - b; printf("Subtração: %f",result); break;
		case 3: result = a * b; printf("Multiplicação: %f",result); break;
		case 4: result = a / b; printf("Divisão: %f",result); break;
		case 5: result = sqrt(a); printf("Raiz quad. %.1f",result); break;
		default: printf("Operação não encontrada!");
}
}
