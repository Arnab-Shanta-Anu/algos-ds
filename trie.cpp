#include<bits/stdc++.h>

using namespace std;

struct node{
    struct node *child[26];
    bool isEnd;
};

struct node *newNode(void)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->isEnd=false;

    for(int i=0;i<26;i++){
        temp->child[i]=NULL;
    }
    return temp;
}

void Insert(struct node *root, string key)
{
    struct node *toor=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(!toor->child[index])
            toor->child[index]=newNode();

        toor = toor->child[index];
    }
    toor->isEnd=true;
}

bool Search(struct node *root, string key)
{
    struct node *toor=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(!toor->child[index])
            return false;
        toor = toor->child[index];
    }
    return (toor != NULL && toor->isEnd);
}

void del(struct node* root)
{
    for (int i = 0; i < 26; i++)
        if (root->child[i])
            del(root->child[i]);

    delete (root);
}

int main()
{
    string keys[]={"the", "a", "there",
                    "answer", "any", "by", "bye", "their" };
    int n=sizeof(keys)/sizeof(keys[0]);

    struct node *root=newNode();

    for(int i=0;i<n;i++){
        Insert(root, keys[i]);
    }
    printtree(root);
    Search(root,"the")?cout<<"found"<<endl:cout<<"not found"<<endl;
    Search(root,"on")?cout<<"found"<<endl:cout<<"not found"<<endl;
    Search(root,"ans")?cout<<"found"<<endl:cout<<"not found"<<endl;

    del(root);
    Search(root,"the")?cout<<"found"<<endl:cout<<"not found"<<endl;
    return 0;
}
