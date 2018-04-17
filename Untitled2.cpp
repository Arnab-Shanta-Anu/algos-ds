#include<bits/stdc++.h>
using namespace std;
bitset<100000> bset1;
bitset<100000> bset2;
bitset<100000> bset3;
void P(int u1,int u2,int u3, int n1, int n2, int n3);
int main()
{
    int t,ti;
    scanf("%d",&t);
    for(ti=1;ti<=t;ti++){
        int i,n1;
        scanf("%d",&n1);
        for(i=0;i<n1;i++){
            int n;
            scanf("%d",&n);
            bset1[n]=1;
        }
        int n2;
        scanf("%d",&n2);
        for(i=0;i<n2;i++){
            int n;
            scanf("%d",&n);
            bset2[n]=1;
        }
        int n3;
        scanf("%d",&n3);
        for(i=0;i<n3;i++){
            int n;
            scanf("%d",&n);
            bset3[n]=1;
        }
        int u1=0,u2=0,u3=0;

        for(i=0;i<100000;i++){
            if(((bset1[i]^bset2[i])^bset3[i])==1){
                if(((bset1[i]&bset2[i])&bset3[i])==0){
                    if(bset1[i])
                        u1++;
                    else if(bset2[i])
                        u2++;
                    else
                        u3++;
                }
            }
            else{
                if(bset1[i]){
                    bset1[i]=0;
                    n1--;
                }
                if(bset2[i]){
                    bset2[i]=0;
                    n2--;
                }
                if(bset3[i]){
                    bset3[i]=0;
                    n3--;
                }

            }
        }
        printf("Case #%d:\n",ti);
        P(u1,u2,u3,n1,n2,n3);
        bset1.reset();
        bset3.reset();
        bset2.reset();
    }

    return 0;
}
void P(int u1,int u2,int u3,int n1,int n2,int n3)
{
    int i;
    if(u1>u2&&u1>u3){

            printf("1 %d ",n1);
            for(i=0;i<10000;i++){
                if(bset1[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

    else if(u2>u1&&u2>u3){

            printf("2 %d ",n2);
            for(i=0;i<10000;i++){
                if(bset2[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

    else if(u3>u1&&u3>u2){

            printf("3 %d ",n3);
            for(i=0;i<10000;i++){
                if(bset3[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

    else if(u1==u2&&u2==u3){

            printf("1 %d ",n1);
            for(i=0;i<10000;i++){
                if(bset1[i])
                    printf("%d ",i);
            }
            printf("\n");
            printf("2 %d ",n2);
            for(i=0;i<10000;i++){
                if(bset2[i])
                    printf("%d ",i);
            }
            printf("\n");
            printf("3 %d ",n3);
            for(i=0;i<10000;i++){
                if(bset3[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

    else if(u1==u2){

            printf("1 %d ",n1);
            for(i=0;i<10000;i++){
                if(bset1[i])
                    printf("%d ",i);
            }
            printf("\n");
            printf("2 %d ",n2);
            for(i=0;i<10000;i++){
                if(bset2[i])
                    printf("%d ",i);
            }
        }

    else if(u2==u3){

            printf("2 %d ",n2);
            for(i=0;i<10000;i++){
                if(bset2[i])
                    printf("%d ",i);
            }
            printf("\n");
            printf("3 %d ",n2);
            for(i=0;i<10000;i++){
                if(bset3[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

    else if(u1==u3){

            printf("1 %d ",n1);
            for(i=0;i<10000;i++){
                if(bset1[i])
                    printf("%d ",i);
            }
            printf("\n");
            printf("3 %d ",n3);
            for(i=0;i<10000;i++){
                if(bset3[i])
                    printf("%d ",i);
            }
            printf("\n");
        }

}
