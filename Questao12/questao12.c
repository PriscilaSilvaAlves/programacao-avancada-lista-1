#include <stdio.h>
int main(){
	int i=3, *p;
	p=&i;
	printf("A variável P contém o endereço de i, o ponteiro de p (*p) acessará o endereço contido na variável p, que por acaso é o endereço de i. \n");
	printf("p=%p",p);
}
