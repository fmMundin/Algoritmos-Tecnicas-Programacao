#include <stdio.h>
#include <locale.h>

int main (void){
int n1,n2,n3;
printf("Informe um número: ");
scanf("%d",&n1);

printf("Informe um segundo número: ");
scanf("%d",&n2);

printf("Informe um terceiro número: ");
scanf("%d",&n3);

//Primeiro numero
if (n1 <= n2 && n1 < n3){
	printf("%d,",n1);
}
else if (n2 <= n1 && n2 < n3){
	printf("%d,",n2);
}
else {
	printf("%d,",n3);
}

//Segundo numero
if ((n1 <= n2 && n1 > n3 )||(n1 >= n2 && n1 < n3 )){
	printf("%d,",n1);
}
else if ((n2 <= n1 && n2 > n3) || (n2 >= n1 && n2 < n3)){
	printf("%d,",n2);
}
else {
	printf("%d,",n3);
}

//Terceiro numero
if (n1 >= n2 && n1 > n3){
	printf("%d,"n1);
}
else if (n2 >= n1 && n2 > n3){
	printf("%d,"n2);
}
else {
	printf("%d,"n3);
}
}
