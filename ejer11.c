#include <stdio.h>
#include<stdlib.h>
void Inquilinos(int torres[7][20][6]){
	int i,j,k;
	for(i=0;i<7;i++){
		for(j=0;j<20;j++){
			for(k=0;k<20;k++){
				printf("%d\t",torres[i][j][k]);
			}printf("\n");
		}printf("\n");
	}
}
int main() {
	int torres[7][20][6]={0},i,j,k,toalH=0,acu=0;
	float prome[7][20],totalT[7]={0};
	for(i=0;i<7;i++){
		for(j=0;j<20;j++){
			for(k=0;k<6;k++){
				printf("Ingrese Cantidad de habitantes de la torre %d piso %d del departemento %d: ",i+1,j+1,k+1);
				scanf("%d",&torres[i][j][k]);
				toalH+=torres[i][j][k];
				totalT[i]+=torres[i][j][k];
				acu+=torres[i][j][k];
			}
			prome[i][j]=acu;
			acu=0;
		}
	}
	Inquilinos(torres);
	printf("Cantidad de habitantes del complejo: %d\n",toalH);
	printf("Cantidad de habitantes por torre: \n");
	for(i=0;i<7;i++){
		printf("Torre %d: %.2f\n",i+1,totalT[i]);
	}
	printf("Promedio de habitantes por torre: \n");
	for(i=0;i<7;i++){
		printf("Torre %d: %.2f\n",i+1,totalT[i]/7);
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Torre %d Piso %d: %.2f\n",i+1,j+1,prome[i][j]/6);
		}
	}
	
	return 0;
}
