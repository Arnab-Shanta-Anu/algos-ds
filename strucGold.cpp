#include<bits/stdc++.h>
using namespace std;

struct Time{
    int hr,mn,sc;
};

struct Employee{
    Time entry,exit,duration;
};

struct Company{
    Employee E[3];
};

void get_Input(Employee &f)
{
    cout<<"Start Time\nHour: ";
    cin>>f.entry.hr;
    cout<<"Min: ";
    cin>>f.entry.mn;
    cout<<"Sec: ";
    cin>>f.entry.sc;

    cout<<"End Time\nHour: ";
    cin>>f.exit.hr;
    cout<<"Min: ";
    cin>>f.exit.mn;
    cout<<"Sec: ";
    cin>>f.exit.sc;
}

Time workHr(Time s, Time e)
{
    Time tmp;
    if(s.sc>e.sc){
        e.sc+=60;
        s.mn++;
        tmp.sc=e.sc-s.sc;
    }
    if(s.mn>e.mn){
        e.mn+=60;
        s.hr++;
        tmp.mn=e.mn-s.mn;
    }
    tmp.hr=e.hr-s.hr;
    return tmp;
}
int main()
{
    Company jonyCO;
    for(int i=0;i<3;i++){
        get_Input(jonyCO.E[i]);
        jonyCO.E[i].duration=workHr(jonyCO.E[i].entry,jonyCO.E[i].exit);
    }
    cout<<"****************************"<<endl;
    for(int i=0;i<3;i++){
    cout<<"Employee No: "<<i+1<<endl;
    cout<<"Start time "<<jonyCO.E[i].entry.hr<<":"<<jonyCO.E[i].entry.mn:<<jonyCO.E[i].entry.sc<<endl;
    cout<<"End time "<<jonyCO.E[i].exit.hr<<":"<<jonyCO.E[i].exit.mn:<<jonyCO.E[i].exit.sc<<endl;
    cout<<"Duration "<<jonyCO.E[i].duration.hr<<":"<<jonyCO.E[i].duration.mn:<<jonyCO.E[i].duration.sc<<endl;
    }
    return 0;
}
