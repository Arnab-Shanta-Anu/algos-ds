#include<bits/bits/stdc++.h>

using namespace std;

int fermat(int n, int r, int p);
int modinverse();
int power(int x, int y, int p);
int extendedeucid(int x, int y, int *x, int *y);

int main()
{
    int n,r,p;
    scanf("%d %d %d",&n,&r,&p);
    fermat(n,r,p);


    return 0;
}
