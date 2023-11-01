#include <stdio.h>
#include <stdlib.h>
int Suma(int acu, int arreglo[15][12]){
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			acu+=arreglo[i][j];
		}
	}
	return acu;
}
int main() {
	int arreglo[15][12]={0},me,acu=0,ne=0,i,j;
	for(i=0;i<15;i++){
		for(j=0;j<12;j++){
			printf("Ingrese el elemento%d%d: ",i+1,j+1);
			scanf("%d",&arreglo[i][j]);
			if(i==0){
				me=arreglo[i][j];
			}else{
				if(me>arreglo[i][j]){
					me=arreglo[i][j];
				}
			}
		}
	}
	acu=Suma(acu,arreglo);
	for(i=4;i<8;i++){
		for(j=0;j<12;j++){
			if(arreglo[i][j]<0){
				ne++;
			}
		}
	}
	printf("El menor numero es %d\n",me);
	printf("La suma de la primeras 5 filas son: %d\n",acu);
	printf("La cantidad de negativos en la filas 5 a 9 son: %d\n",ne);
	
	return 0;
}

