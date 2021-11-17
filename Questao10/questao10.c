#include <stdio.h>
int main(){
	char x1[4];
	//Declarando x[4] do tipo char e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4093, x+2 será 4094 e x+3
	//será 4095.
	for(int i=0;i<4;i++){
		printf("Endereço de memória com char na posição x[%d]: %d  \n",i,x1+i);
	}
	int x2[4];
	//Declarando x[4] do tipo int e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4094, x+2 será 4096 e x+3
	//será 4098.
	for(int i=0;i<4;i++){
		printf("Endereço de memória com int na posição x[%d]: %d \n",i,x2+i);
	}
	float x3[4];
	//Declarando x[4] do tipo float e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4096, x+2 será 4100 e x+3
	//será 4104.
	for(int i=0;i<4;i++){
		printf("Endereço de memória com float na posição x[%d]: %d \n",i,x3+i);
	}
	double x4[4];
	//Declarando x[4] do tipo double e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4100, x+2 será 4108 e x+3
	//será 4116.
	for(int i=0;i<4;i++){
		printf("Endereço de memória com doble na posição x[%d]: %d \n",i,x4+i);
	}
}

