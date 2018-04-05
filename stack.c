#include<stdio.h>

int sta[1000];
int ind=0;
/******************************
 * inserts a value at the end *
 ******************************/
void Push(int i)
{
    sta[ind++]=i;
    return;
}
/********************************
 * deletes the value at the end *
 ********************************/
void Pop(void)
{
    if(ind>=1)
    sta[--ind]=0;
    else
        printf("\n\t\t\t\tnothing to pop....\n\n");
    return;
}
/*****************************
 * returns the size of stack *
 *****************************/
int Size(void)
{
    return ind;
}
/**************************************
 * returns the top value of the stack *
 **************************************/
int Top(void)
{
    return sta[ind-1];
}

int main()
{
    int a=0,i;
    printf("\t\t\t\t\tWelcome to stack sim \n\n\n\n");
    while(a!=5){
        printf("\n\n\t\t\t\t\tpress 1 for push()\n\t\t\t\t\t2 for pop()\n\t\t\t\t\t3 for size\n\t\t\t\t\t4 to Top\n\t\t\t\t\t5 to exit....");
        scanf("%d",&a);
        switch(a){
            case 1:{
                printf("enter value to push: ");
                scanf("%d",&i);
                Push(i);
            }break;
            case 2: Pop();
                break;
            case 3: printf("\n\n\t\t\t\t\t\t\t%d\n\n",Size());
                break;
            case 4:{
                if(ind>=1)
                    printf("\n\n\t\t\t\t\t\t\t%d\n\n",Top());
                else
                    printf("nothing on the stack..");
            }break;
            default:
                return 0;
        }
    }
    return 0;
}
