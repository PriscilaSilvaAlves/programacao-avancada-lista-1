#include <stdio.h>
int main()
{
	int i=2, j=3, *p, *q;
	printf("i=%d \n",i);
	printf("j=%d \n",j);
	printf("&i=%d \n",&i);
	printf("&j=%d \n \n",&j);
	p=i;
	printf("p=i: p=%d \n",p);
	q=&j;
	printf("q=&j: q=%d \n",q);
	p=&*&i;
	printf("p=&*&i: p=%d \n",p);
	//i=(*&)j;
	printf("i=(*&)j: i= Notação ilegal \n",i);
	i=*&j;
	printf("i=*&j: i=%d \n",i);
	i=*&*&j;
	printf("i=*&*&j: i=%d \n",i);
	q=*p;
	printf("q=*p: q=%d \n",q);
	i=(*p)++ + (*q);
	printf("i=(*p)++ + *q: i=%d \n",i);
}
