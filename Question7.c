#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        if(i%2==0)
        printf("%d\n",i);
         else
        continue;
    }
    return 0;
}