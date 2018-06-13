#include<stdio.h>
int main()
{
 long num=0;
  int temp =0;
  int i = 1;
printf("C program to extract digits from a number---------");
printf("\n\n Enter a number:");
scanf("%i",&num);
while(num>=1)
{
  temp= num%10; /* get unit digit*/
  
  printf("\nDigit a t %d place is %d\n", i , temp);
  num = num/10; // removes unit digit
  i++;
  }
return 0;


}