#include <stdio.h>
#include <stdlib.h>
void somar(int num, float *array1, float *array2, float *result){
	for(int i=0; i<num; i++){
		result[i]=array1[i]+array2[i];
	}
	for(int z=0; z<num; z++){
		printf("Posição %d = %f \n", z, result[z]);
	}
}
int main(void){
	float *vetor1, *vetor2, *vetor3;
	int n;
	printf("Qual é o tamanho do vetor? \n");
	scanf("%d",&n);
	vetor1=malloc(n*sizeof(float));
	vetor2=malloc(n*sizeof(float));
	vetor3=malloc(n*sizeof(float));
	for(int i=0; i<n; i++){
		printf("Insira o elemento número %d do vetor 1: \n", i);
		scanf("%f", &vetor1[i]);
	}
	for(int j=0; j<n; j++){
		printf("Insira o elemento número %d do vetor 2: \n", j);
		scanf("%f", &vetor2[j]);
	}
	somar(n,vetor1,vetor2,vetor3);
	return 0;
}

