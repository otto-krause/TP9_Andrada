#include <stdio.h>
#include <stdlib.h>
int Nega(int ne, int matriz[5][6]){
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(matriz[i][j]<0){
				ne++;
			}
		}
	}
	return ne;
}
int main() {
	int matriz[5][6],i,j,ne=0,cero=0;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	ne=Nega(ne,matriz);
	for(i=0;i<5;i++){
		if(matriz[i][i]==0){
			cero++;
		}
	}
	printf("La cantidad de negativos son: %d\n",ne);
	printf("La cantidad de 0 en la diagonal principal son: %d\n",cero);
	return 0;
}

