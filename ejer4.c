#include <stdio.h>
#include <stdlib.h>
void Desorden(int matriz[2][7],int i){
	for(int j=0;j<7;j++){
		if(j==0){
			matriz[1][j]=matriz[0][i-1];
		}else{
			matriz[1][j]=matriz[0][j-1];
		}
	}
}
int main() {
	int matriz[2][7]={0},i,j;
	for(i=0;i<7;i++){
		printf("Ingrese el elemento %d: ",i+1);
		scanf("%d",&matriz[0][i]);
	}
	Desorden(matriz,i);
	for(i=0;i<2;i++){
		for(j=0;j<7;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}

