#include <stdio.h>
#include <stdlib.h>
float Suma(float acu,float bondi[20][9],int i, int j){
	return acu+=bondi[i][j];
}
int main() {
	int i,j;
	float bondi[20][9]={0},acu=0;
	for(i=0;i<2;i++){
		for(j=0;j<9;j++){
			if(j==0){
				bondi[i][j]=i+1;
			}else{
				if(j==8){
					bondi[i][j]=0;
				}
				else{
					printf("Ingrese Km recorridos en el dia %d: ",j);
					scanf("%f",&bondi[i][j]);
				}
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=1;j<9;j++){
			if(j!=8){
				acu=Suma(acu,bondi,i,j);
			}else{
				bondi[i][8]=acu;
			}
		}
		acu=0;
	}
	printf("N°\tdia1\tdia2\tdia3\tdia4\tdia5\tdia6\tdia7\tdiaTotal\n");
	for(i=0;i<2;i++){
		for(j=0;j<9;j++){
			printf("%.2f\t",bondi[i][j]);
		}
		printf("\n");
	}
	return 0;
}

