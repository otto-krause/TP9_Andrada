#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random(int matriz[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=rand()%10;
		}
	}
}
int main() {
	int matriz[4][4],i,j,k,cont0=0;
	srand(time(NULL));
	Random(matriz);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t",matriz[i][j]);
			if(matriz[i][j]==0){
				cont0++;
			}
		}
		printf("\n");
	}
	printf("Hay %d 0",cont0);
	return 0;
}

