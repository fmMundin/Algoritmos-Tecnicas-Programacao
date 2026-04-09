#include <stdio.h>
#include <locale.h>

int main (void){
	float altF= 1.50;
	float altC = 1.10;
	int ano = 0;
	setlocale(LC_ALL,"");
	
	while(altF>altC){
		altF = altF+0.02;
		altC = altC+0.03;
		ano ++;
	}
	
	printf("Demorou %d anos, mas Ciclano passou FUlano",ano);
    
}
