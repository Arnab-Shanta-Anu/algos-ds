#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class Time{
private:
  int hour,minute,sec;
public:
  void setInput(){
    scanf("%d:%d:%d",&hour,&minute,&sec);
  }
  int getHour(){return hour;}
  int getMin(){return minute;}
  int getSec(){return sec;}
  void setHour(int n){hour=n;}
  void setMin(int n){minute=n;}
  void setSec(int n){sec=n;}
};
class Person{
private:
  char name[40];
  int age;
public:
  void setName(){cin>>name;}
  void showName(){cout<<name<<endl;}
  void setAge(){cin>>age;}
  void showAge(){cout<<age<<endl;}
};
class Employee: public Person{
private:
  Time entry,exit,duration;
  int id;
  char Designation[30];
public:
  void getInput()
  {
    cout<<"Enter name: ";
    this->setName();
    cout<<"Enter age: ";
    this->setAge();
    cout<<"Enter id no.: ";
    cin>>id;
    cout<<"Enter designation: ";
    cin>>Designation;
    cout<<"Enter entry time(hh:mm:ss): ";
    this->entry.setInput();
    cout<<"Enter exit time(hh:mm:ss): ";
    this->exit.setInput();
  }
  void setId(){cin>>id;}
  void setDesignation(){cin>>Designation;}
  Time getDuration()
  {
    Time tmp;
    if(entry.getSec()>exit.getSec()){
      exit.setSec(exit.getSec()+60);
      entry.setMin(entry.getMin()+1);
    }
    tmp.setSec(exit.getSec()-entry.getSec());

    if(entry.getMin()>exit.getMin()){
      exit.setMin(exit.getMin()+60);
      entry.setHour(entry.getHour()+1);
    }
    tmp.setMin(exit.getMin()-entry.getMin());

    tmp.setHour(exit.getHour()-entry.getHour());

    return tmp;
  }
  void showInfo()
  {
    cout<<"*******************************"<<endl;
    cout<<"Name: ";
    showName();
    cout<<"\nAge: ";
    showAge();
    cout<<"\nId: "<<id<<endl;
    cout<<"Designation: "<<Designation<<endl;
    cout<<"Entry time: "<<entry.getHour()<<":"<<entry.getMin()<<":"<<entry.getSec()<<endl;
    cout<<"Exit time: "<<exit.getHour()<<":"<<exit.getMin()<<":"<<exit.getSec()<<endl;
  }
  void showDuration()
  {
    Time tmp=getDuration();
    cout<<"Duration="<<tmp.getHour()<<":"<<tmp.getMin()<<":"<<tmp.getSec()<<endl;
  }
};

int main()
{
  Employee E1;
  E1.getInput();

  E1.showInfo();
  E1.showDuration();

  return 0;
}
