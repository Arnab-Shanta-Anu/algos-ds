#include<bits/stdc++.h>
using namespace std;

int ar[10]={1,2,3,4,5,6,7,8,9,10};

struct node{
    int data;
    struct node *left,*right;
};
struct node* newnode(int key)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=key;
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insertnode(struct node *root,int key)
{
    if(root==NULL)
        return newnode(key);
    if(key>root->data)
        root->right=insertnode(root->right, key);
    else if(key<root->data)
        root->left=insertnode(root->left, key);

    return root;
}

void printtree(struct node *root)
{
    if(root){
        printtree(root->left);
        printf("%d ",root->data);
        printtree(root->right);
    }
}
int main()
{
    struct node *root = NULL;
    root=insertnode(root,ar[0]);
    int i=1;
    while(i<10){
    insertnode(root,ar[i]);
    i++;
    }
    printtree(root);
    return 0;
}

