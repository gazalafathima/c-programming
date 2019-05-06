#include<stdio.h>
void inputarray();
void sumarray(int n,int a[100]);
void outputarray(int sum);
void inputarray()
{
                int n,a[100],i;
                printf("enter the numbers:\n");
                scanf("%d",&n);
                printf("enter the elements %d",n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                }
                sumarray(n,a);
}
void sumarray(int n,int a[100])
{
        int sum=0,i;
        for(i=0;i<n;i++)
        {
                sum=sum+a[i];
        }
        outputarray(sum);
}
void outputarray(int sum)
{
        printf("sum=%d",sum);
}
int main()
{
        inputarray();
        return 0;
}

