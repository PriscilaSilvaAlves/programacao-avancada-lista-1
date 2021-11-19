#include "gc.h"
#include <stdio.h>
#include <stdlib.h>
int impressao(){
	int *variavel;
	variavel = malloc(sizeof(int));
	*variavel = 42;
	printf("Variável com Malloc = %p \n", variavel);
	free(variavel);
	return 0;
}
int impressaoGC(){
	int *variavel;
	variavel = GC_malloc(sizeof(int));
	*variavel = 42;
	printf("Variável com GC_malloc = %p \n", variavel);
	GC_free(variavel);
	return 0;
}
int main(){
	clock_t tempo1, tempo2, temp;
	temp = clock();
	impressao();
	tempo1=clock()-temp;
	temp = clock();
	impressaoGC();
	tempo2=clock()-temp;
	printf("Tempo da impressão com Malloc e Free = %d \n", tempo1);
	printf("Tempo da impressão com GC_Malloc e GC_Free = %d \n", tempo2);
}
