#include<stdio.h>

int lp[1000]={0,1};
int fib(int n)
{
    /**base case**/
    if(lp[n]!=-1)
        return lp[n];
    else
        lp[n]=fib(n-2)+fib(n-1);
    return lp[n];
}

int main()
{
    int i;
    for(i=2;i<1000;i++)
        lp[i]=-1;
    int n;
    printf("enter the no of fib element: ");
    scanf("%d",&n);

    printf("%d\n",fib(n));

    return 0;
}
