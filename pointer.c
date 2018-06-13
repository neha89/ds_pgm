#include<stdio.h>
int main()
{
 int a;//declared variable
 int *p; //pointer to integer
  a=10;
  p=&a; //assigning address of a to pointer parsfnm
  printf("%d\n",p);
  printf("%d\n",a);
 printf("%d\n",&p);
  printf("%d\n",*p);
 *p=8;
 printf("%d\n",a); 
return 0;
}