#include<stdio.h>
int main()
{
	int a;//declared variable
	a=20; //a initiazed
	int *p; //pointer to integer
	p=&a; //assigned address of a
	printf("%d\n",p);//prints address of a
	printf("%d\n",*p); //prints value of a
	printf("%d",&a); //prints address of a
	return 0;
}