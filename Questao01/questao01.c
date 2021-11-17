#include <stdio.h>
int main()
{
	int i=3, j=5;
	int *p, *q, r2, r3, r4, r5;
	p = &i;
	q = &j;
	printf("i=%d \n", i);
	printf("j=%d \n \n", j);
	printf("&i=%d \n", &i);
	printf("&j=%d \n \n", &j);
	printf("p=&i: p=%d \n", p);
	printf("q=&j: q=%d \n \n", q);
	printf("*p=%p \n", *p);
	printf("*q=%p \n \n", *q);
	p==&i;
	printf("p==&i: p=%d \n", p);
	r2=(*p)-(*q);
	printf("*p-*q: %d \n", r2);
	r3=**&p;
	printf("**&p: %d \n", r3);
	r4 = (*p)/(*q);
	r5= 3-r4+7;
	printf("3-(*p)/(*q)+7: %d \n", r5);
	return 0; 
}
