#include <stdio.h>
#include <locale.h>

int main(void){
	int i,n,j;
	setlocale(LC_ALL,"");
	printf("Informe ate qual numero:");
	scanf("%d",&n);
	for(i = 1;i<=n;i++ ){
		for(j = 2; j<=n;j++){
			if (i%j==0 && j !=1 && j != i){
				printf("%d não é primo pois é divisivel por %d\n",i,j);
			}
			else {
				printf("%d",i);
			}
		}
	}
}
