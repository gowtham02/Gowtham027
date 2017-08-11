#include<stdio.h>
//#include<conio.h>
int main()
{
char F;
printf("enter the alphabet\n");
scanf("%c",&F);
if (F=='a'||F=='e'||F=='i'||F=='o'||F=='u')
printf("char is vowel");
else
    printf("char is consonant");
return(0);
}
