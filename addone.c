#include<stdio.h>
int add(int);
int main()
{
int n,b;
printf("enter a number\n");
scanf("%d",&n);
b=add(n);
printf("%d",b);
}
 int add(int a)
{
int b;
b=a+1;
return b;
}

