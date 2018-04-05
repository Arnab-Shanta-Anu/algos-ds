#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SORT.h"

//typedef struct {
//    char name[20];
//    unsigned int id,day,month,year;
//}student;
mal
int takeInput(student *st, int n);//returns no of input
void printList(student *st, int n);
void printMenu(void);

int main()
{
    student *st=(student *)calloc(71, sizeof(student));
    int n=takeInput(st,71);
    //printList(st,n);
    printMenu();
    int choice;
    scanf("%d",&choice);
    sortList(st,n,choice);
    printList(st,n);
    return 0;
}


void printList(student *st, int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("\n\nstudent no: %d\n",i+1);
        printf("Name: %s\n",st[i].name);
        printf("Roll: %u\n",st[i].id);
        printf("Birth date: %u-%u-%u\n\n",st[i].day,st[i].month,st[i].year);
    }
}
void printMenu(void)
{
    printf("Press 1 for sort using name\n");
    printf("Press 2 for sort using id\n");
    printf("Press 3 for sort using birth year\n");
}
int takeInput(student *st, int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter name:(or enter 0 to finish) ");
        gets(st[i].name);
        if(!strcmp(st[i].name,"0"))
            return i;
        printf("Enter id no. : ");
        scanf("%u",&st[i].id);
        printf("Enter birth date: (dd/mm/yyyy) ");
        scanf("%u/%u/%u",&st[i].day, &st[i].month, &st[i].year);
        getchar();
    }
    return i;
}
