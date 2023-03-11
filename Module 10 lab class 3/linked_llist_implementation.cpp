//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node *nxt;
};
class LinkedList{
    public:
    node* head;

    LinkedList()
    {
        head=NULL;
    }

    node *CreateNewNode(int value)
    {
        node *NewNode= new node;
        NewNode->data=value;
        NewNode->nxt=NULL;
        return NewNode;
    }
    void InsertAtHead(int value)
    {
        node *a=CreateNewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }

        a->nxt=head;
        head=a;

    }

    void traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }

    int  SearchDistintValue(int value)
    {
        node *a=head;
        int index=0;
        while (a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->nxt;
            index++;
        }
        return -1;
    }

    void SearchAllValue(int value)
    {
        node *a=head;
        int index=0;
        while (a!=NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" found at index "<<index<<"\n";
            }
           
            a=a->nxt;
            index++;
        }

    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.traverse();
    l.InsertAtHead(30);
    l.traverse();
    l.InsertAtHead(20);
    l.traverse();
    l.InsertAtHead(30);
    l.traverse();

    cout<<"10 is found at the position "<<l.SearchDistintValue(10)<<"\n";
    cout<<"5 is found at the position "<<l.SearchDistintValue(5)<<"\n";
    cout<<"30 is found at the position "<<l.SearchDistintValue(30)<<"\n";

    l.SearchAllValue(30);
    return 0;
}