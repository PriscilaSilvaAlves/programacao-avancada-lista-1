#include <stdio.h>
int main(){
	int i=3, *p;
	p=&i;
	printf("A variável P contém o endereço de i, o ponteiro de p (*p) acessará o conteúdo contido no endereço contido na variável p, que por acaso é o conteúdo de i. \n");
	printf("i = %d \n",i);
	printf("*p = %d \n",*p);
	printf("p = %p",p);
}
