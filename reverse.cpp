#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int k){
        data=k;
        next=nullptr;
    }

};
class CircularLinkedList{
public:
    Node* start=nullptr;
    void insertFirst(int k){
    Node* New=new Node(k);
    if(start==nullptr){
        start=New;
    }
    else{
    Node* p=start;
    while(p->next!=nullptr){
        p=p->next;
    }
    p->next=New;
    }
    }
    void reverseList(){
    Node* p=start;
    Node* s2=nullptr;
    Node* q;
    while(p!=nullptr){
        q=p;
        p=p->next;
        q->next=s2;
        s2=q;
    }
    start=s2;
    }


    void traverse(){
    Node* p=start;
    while(p!=nullptr){
        cout<<p->data<<"\t";
        p=p->next;
    }
    cout<<endl;
    }

};
int main(){
CircularLinkedList c;
c.insertFirst(1);
c.insertFirst(2);
c.insertFirst(3);
c.traverse();
c.reverseList();
c.traverse();
}

