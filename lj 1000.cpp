#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t,ti=1;
    scanf("%d",&t);
    while(t--){
        double r;
        scanf("%lf",&r);
        printf("%lf",r);
        double res;
        res = (4.0*r*r)-(3.1416*r*r);
        printf("Case %d: %.2lf\n",ti++,res);
    }
    return 0;
}
