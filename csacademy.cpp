#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[110],p[26];
    scanf("%s",a);
    getchar();
    scanf("%s",p);

    int l=strlen(a),ab;
    for(int i=0;i<l;i++){
        ab=a[i]-'a';
        printf("%c",p[ab]);
    }
    printf("\n");

    return 0;
}
