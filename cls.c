#include<stdio.h>

void reverseOrderPrintTillN(int n);
void PrintTillN(int n);
int main()
{
    printf("printing in reverse order......\n");
    reverseOrderPrintTillN(10);
    printf("\n\n");
    printf("printing in real order......\n");
    PrintTillN(10);
    return 0;
}
void reverseOrderPrintTillN(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    reverseOrderPrintTillN(n-1);
}
void PrintTillN(int n)
{
    if(n==0)
        return;
    PrintTillN(n-1);
    printf("%d ",n);
}
