#include <stdio.h>
void Cargar(float chofer[5][9],char nombre[5][20]){
	for(int i=0;i<5;i++){
		for(int j=0;j<8;j++){
			if(j==0){
				printf("Ingrese Nombre: ");
				scanf("%s",&nombre[i][j]);
			}else{
				if(j!=7){
					printf("Ingrese horas trabajadas: ");
					scanf("%f",&chofer[i][j-1]);
					chofer[i][7]=chofer[i][7]+chofer[i][j-1];
				}else{
					printf("Ingrese sueldo por hora: ");
					scanf("%f",&chofer[i][j-1]);
					chofer[i][8]=chofer[i][j-1];
					chofer[i][8]*=chofer[i][7];
				}
			}	
		}
	}
}
int main() {
	int i,j;
	float chofer[5][9]={0},ma=0,acu=0;
	char nombre[5][20],nom;
	Cargar(chofer,nombre);
	for(i=0;i<5;i++){
		if(chofer[i][0]>ma){
			nom=nombre[i][0];
			ma=chofer[i][0];
		}
		acu+=chofer[i][8];
	}
	printf("Nombre\tHoras\tSueldo\t\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(j==0){
				printf("%c\t",nombre[i][j]);
			}
			else{
				if(j==1){
					printf("%.2f\t",chofer[i][7]);
				}else{
					printf("%.2f\t",chofer[i][8]);
				}
			}
		}
		printf("\n");
	}
	printf("Chofer con mas horas trabajadas el lunes: %c\n",nom);
	printf("Total de paga de la empresa: %.2f",acu);
	return 0;
}

