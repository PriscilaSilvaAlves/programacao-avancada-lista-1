#include <stdio.h>
int main(){
	char x[4];
	//Declarando x[4] do tipo char e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4093, x+2 será 4094 e x+3
	//será 4095.
	int x[4];
	//Declarando x[4] do tipo int e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4094, x+2 será 4096 e x+3
	//será 4098.
	float x[4];
	//Declarando x[4] do tipo float e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4096, x+2 será 4100 e x+3
	//será 4104.
	double x[4];
	//Declarando x[4] do tipo double e supondo que x[0] está localizado
	//na posição 4092 da memória, x+1 será 4100, x+2 será 4108 e x+3
	//será 4116.
}
