#include <stdio.h>
int main()
{
	int i=5, *p;
	p = &i;
	printf("1) Valor de i: %d \n", i);
	printf("2) Endereço de memória de i: p=%x \n", p);
	printf("3) i mais 2: *p+2=%d \n",*p+2);
	printf("4) Ponteiro para o conteúdo de p: **&p=%d \n", **&p);
	printf("5) 3 vezes i: 3**p=%d\n",3**p);
	printf("6) i mais 4: **&p+4=%d\n",**&p+4);
	printf("Com i ocupando o endereço de memória 4094, a saída de 2) será 4094");
}
