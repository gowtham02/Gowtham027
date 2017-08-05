#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
if(num>0)
printf("num is positive");
else if(num<0)
printf("num is negative");
else
printf("num is zero");
}
