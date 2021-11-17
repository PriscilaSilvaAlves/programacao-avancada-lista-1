#include <stdio.h>
int main(){
	int vet[] = {4,9,13};
	int i;
	printf("Impressão dos elementos do vetor vet[] através do ponteiro para o endereço: \n");
	for(i=0;i<3;i++){
		printf("%d \n",*(vet+i));
	}
	printf("Impressão da posição de memória dos elementos do vetor vet[]: \n");
	for(i=0;i<3;i++){
		printf("%X \n",vet+i);
	}
}
