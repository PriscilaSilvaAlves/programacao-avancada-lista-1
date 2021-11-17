#include <stdio.h>
int main(){
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	aloha[2] = value;
	//O formato %f espera um argumento do tipo float *
	//scanf("%f", &aloha);
	//Comando inválido:
	//aloha = value";
	//Espera um argumento double, mas recebe um float *
	//printf("%f", aloha);
	coisas[4][4] = aloha[3];
	//Expressão incompatível com array
	//coisas[5] = aloha;
	//Tipos incompatíveis:
	//pf = value;
	pf = aloha;
}
