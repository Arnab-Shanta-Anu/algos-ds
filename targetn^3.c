#include<stdio.h>

int main()
{
    int row,col,i,j;
    printf("enter row and col no: ");
    scanf("%d %d",&row, &col);
    int arr[row][col];

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int k,l,m,o,mxsqr=-99,crntsqr=0,strt=-1,end=-1;
    for(i=0;i<row-1;i++){
        for(j=0;j<col-1;j++){
            for(k=i+1;k<row;k++){
                for(l=j+1;l<col;l++){
                    if(k-i!=l-j)
                        continue;
                    for(m=i;m<=k;m++){
                        for(o=j;o<=l;o++){
                            if(arr[m][o]==0)
                                break;
                            crntsqr++;
                        }

                    }
                    if(crntsqr>mxsqr){
                            mxsqr=crntsqr;
                            strt=i*10+j;
                            end=k*10+l;
                        }
                        crntsqr=0;
                }
            }
        }
    }
    printf("max size square is %d\nstarting at %02d and ending at %02d\n",mxsqr,strt,end);
    return 0;
}
