#include <stdio.h>
#include <stdlib.h>
void Carga(int ma[12][12]){
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&ma[i][j]);
		}
	}
}
int main() {
	int ma1[12][12],ma2[12][12],i,cont=0;
	printf("Matriz 1:\n");
	Carga(ma1);
	printf("Matriz 2:\n");
	Carga(ma2);
	for(i=0;i<12;i++){
		if(ma1[i][i]==ma2[i][i]){
			cont++;
		}
	}
	if(cont==12){
		printf("Tienen la misma diagonal principal");
	}else{
		printf("Tienen una diagonal principal diferente");
	}
	return 0;
}

