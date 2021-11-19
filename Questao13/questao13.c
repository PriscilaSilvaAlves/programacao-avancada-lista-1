#include <stdio.h>
#include <stdlib.h>
void organizar(int num, float *array){
	int temp;
	for(int i=0; i<num; i++){
		for(int j=1; j<num; j++){
			if(array[i]>array[j]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	for(int z=0; z<num; z++){
		printf("Posição %d = %f \n", z, array[z]);
	}
}
int main(void){
	float *vetor;
	int n;
	printf("Qual é o tamanho do vetor? \n");
	scanf("%d",&n);
	vetor=malloc(n*sizeof(float));
	for(int i=0; i<n; i++){
		printf("Insira o elemento número %d: \n", i);
		scanf("%f", &vetor[i]);
	}
	organizar(n,vetor);
	free(vetor);
	return 0;
}
