#include <stdio.h>
void ingresar(float ventas[4][7]) {
	for (int i=0;i<4;i++) {
		printf("Semana %d:\n", i + 1);
		for (int j=0;j<7;j++) {
			printf("Ingrese las ventas del día %d: ", j + 1);
			scanf("%f",&ventas[i][j]);
		}
	}
}

int main() {
	float ventas[4][7],totalV[4]={0},promeV[4]={0},maxV=0;
	int maV=1,i,j;
	
	ingresar(ventas);
	
	for (i=0;i<4;i++) {
		for (j=0;j<7;j++) {
			totalV[i]+= ventas[i][j];
		}
		promeV[i]=totalV[i]/7;
		if (totalV[i]>maxV) {
			maxV=totalV[i];
			maV=i+1;
		}
	}
	
	printf(" Total de ventas por Semana:\n");
	for ( i=0; i < 4; i++) {
		printf("Semana %d: %.2f\n",i+1,totalV[i]);
	}
	
	printf("Promedio de ventas por Semana:\n");
	for (i=0;i<4;i++){
		printf("Semana %d: %.2f\n",i+1,promeV[i]);
	}
	
	printf("Semana de mayor venta: Semana %d\n",maV);
	
	return 0;
}
