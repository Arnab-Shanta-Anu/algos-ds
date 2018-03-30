#include<bits/stdc++.h>
using namespace std;

class bst{
private:
    struct Node{
    int data;
    struct Node *left,*right;
    }node;
public:
    bst* newNode(int dt)
    {
            bst *temp=new bst;
            temp->Node.data=dt;
            temp->Node.right=temp->Node.left=NULL;
            return temp;
    };
    bst* Insert(bst *head,int dt)
    {
        if(head==NULL){
            return newNode(dt);
        }
        if(dt>head->Node.data)
            Insert(head->Node.right,dt);
        else if(dt<head->Node.data)
            Insert(head->Node.left,data);

        return head;
    };
    void printTree(bst *head)
    {
        if(head){
        printTree(head->Node.left);
        cout<<head->Node.data<<" ";
        printTree(head->Node.right);
        }
    };
    void Delet(bst *head, int data);
    void Search(bst *head, int key);
};

int main()
{
    bst *head=NULL;
    //head=hd1=hd2=NULL;
    head=head->Insert(head,50);
    head->Insert(head,30);
    head->Insert(head,70);
    head->Insert(head,60);
    head->Insert(head,65);
    head->Insert(head,35);
    head->Insert(head,40);
    head->printTree(head);
    return 0;
}
