#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("enter the year \n");
{
if (((n % 4 == 0) && (n % 100!= 0)) || (n%400 == 0))
printf("the entered year is leap year");
else
printf("the enter year is not a leap");
}
return 0;
}
