#include "gc.h"
#include <stdio.h>
int main(){
	int *variavel;
	variavel = GC_malloc(sizeof(int));
	*variavel = 42;
	printf("Variável = %p \n", variavel);
	GC_free(variavel);
	return 0;
}
