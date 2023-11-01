#include <stdio.h>
#include <stdlib.h>
void Carga(float clientes[5][6]){
	for(int i=0;i<5;i++){
		printf("Cliente nro %d\n",i+1);
		for(int j=0;j<6;j++){
			if(j==0){
				clientes[i][j]=i+1;
			}else{
				printf("Ingrese la compra en el dia %d: ",j);
				scanf("%f",&clientes[i][j]);
			}
		}
	}
}
int main() {
	int i,j,dia;
	float clientes[5][6]={0},cliente,ma=0;
	Carga(clientes);
	for(i=0;i<5;i++){
		for(j=1;j<6;j++){
			if(ma<clientes[i][j]){
				ma=clientes[i][j];
				cliente=clientes[i][0];
				dia=j;
			}
		}
	}
	printf("La mayor venta fue %.2f del cliente %.2f en el dia %d",ma,cliente,dia);
	return 0;
}

