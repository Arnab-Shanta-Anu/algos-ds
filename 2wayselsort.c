#include<stdio.h>

void swp(int *x, int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int arr[]={30,10,15,50,22};
    int n=sizeof(arr)/sizeof(arr[0]),min_ind,max_ind,i,j,k;
    n--;
    for(i=0;i<=n/2+1;i++){
        min_ind=max_ind=i;
        for(j=i+1;j<=n-i;j++){
            if(arr[j]<arr[min_ind])
                min_ind=j;
            else if(arr[j]>arr[max_ind])
                max_ind=j;
        }
        printf("\nmax=%d\nmin=%d\n",arr[max_ind],arr[min_ind]);
        swp(&arr[i],&arr[min_ind]);
        swp(&arr[n-i],&arr[max_ind]);

        printf("\n\niteration %d\n",i);
        for(k=0;k<=n;k++){
            printf("%d ",arr[k]);
        }

    }

    printf("\n\nfinal\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
