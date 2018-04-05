#ifndef SORT
#define SORT

typedef struct {
    char name[20];
    unsigned int id,day,month,year;
}student;

void sortList(student *st, int n, int choice);
void sortName(student *st, int n);
void sortId(student *st, int n);
void sortYear(student *st, int n);

void sortList(student *st, int n, int choice)
{
    if(choice==1)
        sortName(st,n);
    else if(choice==2)
        sortId(st,n);
    else if(choice==3)
        sortYear(st,n);
    else return;
}
void sortName(student *st, int n)
{
    int i,j;
    student tmp;
    for(i=1;i<n;i++){
        j=i-1;
        tmp=st[i];
        while((j>=0)&&strcmp(st[j].name, tmp.name)>0){
            st[j+1]=st[j];
            j--;
        }
        st[j+1]=tmp;
    }
    return;
}
void sortId(student *st, int n)
{
    int i,j;
    student tmp;
    for(i=1;i<n;i++){
        j=i-1;
        tmp=st[i];
        while(j>=0&&st[j].id>tmp.id){
            st[j+1]=st[j];
            j--;
        }
        st[j+1]=tmp;
    }
}
void sortYear(student *st, int n)
{
    int i,j;
    student tmp;
    for(i=1;i<n;i++){
        j=i-1;
        tmp=st[i];
        while(j>=0&&st[j].year>tmp.year){
            st[j+1]=st[j];
            j--;
        }
        st[j+1]=tmp;
    }
}

#endif // SORT
