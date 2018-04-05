#include<stdio.h>

int que[1000];
int ind=0;
/******************************
 * inserts a value at the end *
 ******************************/
void Push(int i)
{
    que[ind++]=i;
    return;
}
/**********************************
 * deletes the value at the front *
 **********************************/
void Pop(void)
{
    int i;
    if(ind>=1){
        for(i=1;i<ind;i++){
            que[i-1]=que[i];
        }
        ind--;
    }
    else
        printf("\n\t\t\t\tnothing to pop....\n\n");
    return;
}
/*****************************
 * returns the size of queue *
 *****************************/
int Size(void)
{
    return ind;
}
/*****************************
 * returns the front of queue *
 *****************************/
int Front(void)
{
    return que[0];
}


int main()
{
    int a=0,i;
    printf("\t\t\t\t\tWelcome to queue sim \n\n\n\n");
    while(a!=5){
        printf("\n\n\t\t\t\t\tpress 1 for push()\n\t\t\t\t\t2 for pop()\n\t\t\t\t\t3 for size\n\t\t\t\t\t4 to Front\n\t\t\t\t\t5 to exit....");
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
                    printf("\n\n\t\t\t\t\t\t\t%d\n\n",Front());
                else
                    printf("nothing on the queue..");
            }break;
            default:
                return 0;
        }
    }
    return 0;
}
