#include<iostream>
using namespace std;
//tyhis is creating a single node (user defined data type)
class Node{
    public:
    int val;
    Node *next;
    
    Node(int val){
        this->val=val;
        this->next=0;
    }
};
//this is the creation of linkedlist consisting of nodes (user defined data structure)
/*class linkedlist{
    public:
    Node *head;
    Node *tail;
    int size;

    linkedlist(){
        head=tail = 0;
        size=0;
    }
};*/
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    a->next=b;
    b->next=c;

//traversing

    Node *temp = a;
    while(temp->next != 0){
        cout<<temp->val<<" ";
        temp = temp->next;// output is 10 20 30
    }
    cout<<"a value"<<a->val; // 10


}
