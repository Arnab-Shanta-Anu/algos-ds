#include<bits/stdc++.h>
using namespace std;
#define M1 1000000007
#define M2 1000000019
#define B1 53
#define B2 29

int main()
{
	vector<int> givenStringhash1;
	vector<int> givenStringhash2;
	vector<int> givenPattHash1;
	vector<int> givenPattHash2;
	vector<int> base1;
	base1.push_back(1);
	vector<int> base2;
    base2.push_back(1);

	string str;
	cin>>str;
	string pat;
	getchar();
	cin>>pat;
	int x=0,y=0;
    /**Calculating hash of string**/
    for(int i=0; i<str.size(); i++){
            x*=B1%M1;
            x+=str[i]-'a'+1;
            givenStringhash1.push_back(x%M1);
            y*=B2%M2;
            y+=str[i]-'a'+1;
            givenStringhash2.push_back(y%M2);
    }
    cout<<givenStringhash1.back()<<endl;
    cout<<givenStringhash2.back()<<endl;

    x=y=0;
    /**Calculating hash of pattern**/
    for(int i=0; i<pat.size(); i++){
            x*=B1%M1;
            x+=pat[i]-'a'+1;
            givenPattHash1.push_back(x%M1);
            y*=B2%M2;
            y+=pat[i]-'a'+1;
            givenPattHash2.push_back(y%M2);
    }

    cout<<givenPattHash1.back()<<endl;
    cout<<givenPattHash2.back()<<endl;



    return 0;
}
