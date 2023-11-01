#include <stdio.h>
#include <stdlib.h>
void Cero(int matriz[12][19]){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]<0){
				matriz[i][j]=0;
			}
		}
	}
}
int main() {
	int matriz[12][19],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Matriz Antes:\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	Cero(matriz);
	printf("Matriz Despues:\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}

