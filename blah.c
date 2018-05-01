#include <stdio.h>
int info[11],link[11],start=0,avail=0;
void traverse(int start,int n)
{
    int ptr,i;
    ptr=start;
    while(ptr!=-1){
        printf("%d ",info[ptr]);
        ptr=link[ptr];
    }
    printf("\n\n");
}
int search(int start, int key)
{
    int ptr=start;
    int i;

    while(ptr!=-1){
        if(info[ptr]==key)
            return ptr+1;
        ptr=link[ptr];
    }
    return -999;
}
void insrtF(int avail,int data)
{
    info[avail]=data;
    link[avail]=0;
    start=avail;
    avail++;
}
void insrtAf(int start, int ind, int avail, int data)
{
    info[avail]=data;

    int ptr=start,tmp;
    while(ptr!=ind-1){
        ptr=link[ptr];
    }
    tmp=link[ptr];
    link[ptr]=avail;
    ptr=link[ptr];
    link[ptr]=tmp;

    avail++;
}
void delS(int start)
{
    int ptr=start;
    ptr=link[ptr];
    start=info[ptr];
}
void delG(int start, int ind)
{
    int ptr=start;
    while(ptr!=ind-1){
        ptr=link[ptr];
    }

}

int main()
{
    int i,n;
    scanf("%d",&n);
   /**input**/
    for(i=0;i<n;i++){
        scanf("%d",&info[i]);
        if(i==n-1)
            link[i]=-1;
        else
            link[i]=i+1;
        avail++;
    }

    /**traversing**/
    traverse(start,n);

    /**searching**/
    int ind=search(start,2);
    if(ind==-999)
        printf("key isnt in list....\n\n");
    else
        printf("key is in index %d\n\n",ind);

    /**insert at front**/
//    insrtF(avail,12);
//    n++;
//    traverse(start,n);

    /**insert after a given node**/
    insrtAf(start,2,avail,7);
    n++;
    traverse(start,n);
    return 0;
}
