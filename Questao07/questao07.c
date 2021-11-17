#include <stdio.h>
int main()
{
	int mat[4], *p, x;
	p=mat+1;
	printf("p=%p \n",p);
	//p=mat++;
	printf("p=mat++: não é impresso porque mat é um vetor e é preciso percorre-lo para que ele seja incrementado \n");
	//p=++mat;
	printf("p=++mat: um vetor não pode ser incrementado deste modo. \n");
	x=(*mat)++;
	printf("x=%d \n",x);
}
