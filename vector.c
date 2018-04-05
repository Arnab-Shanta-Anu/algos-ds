#include<stdio.h>

int vec[1000];
int ind=0;
/******************************
 * inserts a value at the end *
 ******************************/
void Push_Back(int i)
{
    vec[ind++]=i;
    return;
}
/********************************
 * deletes the value at the end *
 ********************************/
void Pop_Back(void)
{
    if(ind>=1)
    vec[--ind]=0;
    else
        printf("\n\t\t\t\tnothing to pop....\n\n");
    return;
}
/***************************
 * gets the size of vector *
 ***************************/
int Size(void)
{
    return ind;
}


int main()
{
    int a=0,i;
    printf("\t\t\t\t\tWelcome to vector sim \n\n\n\n");
    while(a!=4){
        printf("\n\n\t\t\t\t\tpress 1 for push_back()\n\t\t\t\t\t2 for pop_back()\n\t\t\t\t\t3 for size\n\t\t\t\t\t4 to exit....");
        scanf("%d",&a);
        switch(a){
            case 1:{
                printf("enter value to push_back: ");
                scanf("%d",&i);
                Push_Back(i);
            }break;
            case 2: Pop_Back();
                break;
            case 3: printf("\n\n\t\t\t\t\t\t\t%d\n\n",Size());
                break;
            default:
                return 0;
        }
    }
    return 0;
}
