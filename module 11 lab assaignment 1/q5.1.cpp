#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node* nxt;

};

class LinkedList{

    private:
    int size;

    public:
    node* head;

    LinkedList()
    {
        head=NULL;
        size=0;
    }

    node* createNewNode(int value)
    {
        node* newNode=new node;
        newNode->data=value;
        newNode->nxt=NULL;
        size++;
        return newNode;
    }

    void InsertAtHead(int value)
    {
        node* a=createNewNode(value);

        if (head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head=a;
        
    }

    void getSize()
    {
        cout<<size;
    }

    void swapFirst()
    {
        if (head==NULL || head->nxt==NULL)
        {
            return;
        }

        node* firstNode=head;
        node* secondNode=head->nxt;


        // firstNode->nxt=secondNode->nxt;
        // secondNode->nxt=firstNode;
        // //head=secondNode;
        
        node* val=firstNode->nxt;
        firstNode->nxt=secondNode->nxt;
        secondNode->nxt=val;
        //head=secondNode;
    }

    int getValue(int index)
    {
        if(index>=size)
        {
            return -1;
        }

        node* currentNode=head;
        
        for (int i=0; i<index; i++)
        {
            currentNode=currentNode->nxt;
        }
        
        return currentNode->data;
    }
    void Traverse()
    {
        node* a=head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a->nxt=a;
        }
        cout<<"\n";
    }

};

int main()
{
    LinkedList l;
    l.getSize();
    cout<<"\n";
    l.InsertAtHead(5);
    l.getSize();
    cout<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    l.getSize();
    cout<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    // l.printReverse();
    // l.Traverse();
    l.swapFirst();
    l.Traverse();
    

    return 0;
}