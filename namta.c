#include<stdio.h>

int main()
{
    int n;
    again:
    printf("enter (1-20): ");
    scanf("%d",&n);

    if(n<1||n>20){
        printf("invalid input.....\n");
        goto again;
    }
    int i,j,ch;
    printf("enter 1 for \"for\" loop\n2 for \"while\" loop\n3 for \"do while\" loop: ");
    scanf("%d",&ch);
    switch(ch){

    case 1:{
        for(i=1;i<=n;i++){
            for(j=1;j<=10;j++){
                printf("%d * %d = %d\n",i,j,i*j);
            }
            printf("\t\t");
        }
    }
    break;

    case 2:{
        i=j=1;
        while(i<=n){
            j=1;
            while(j<=10){
                printf("%d * %d = %d\n",i,j,i*j);
                j++;
            }
            i++;
        }
    }
    break;

    case 3:{
        i=j=0;
        do{
            i++;
            j=0;
            do{
            j++;
            printf("%d * %d = %d\n",i,j,i*j);
            }while(j<10);
        }while(i<n);
    }
    break;
    }//switch end
    return 0;
}
