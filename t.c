#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three angles:");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
{
printf("it is a valid triangle");
}
else
{
printf("it is not a triangle");
}
}

