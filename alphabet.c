#include<stdio.h>
//#include<conio.h>
int main()
{
char f;
printf("enter the alphabet\n");
scanf("%c",&f);
if (f>='a' && f<='z') || (f>='A' && f<='Z'))
printf("char is alphabet");
else
    printf("char is not a alphabet");
return(0);
}
