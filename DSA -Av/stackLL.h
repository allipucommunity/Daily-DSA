#include<bits/stdc++.h>
using namespace std;


class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
	// Define the data members

    int data;
    Node * head;
    Node * tail;
    int size;
   public:
    Stack() {
        head=NULL;
        head->next=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
       return size==0;
    }

    void push(int element) {
       
       Node* newNode= new Node(element);
       if(head==NULL){
        head=newNode;
        tail=newNode;
        size++;
       }else{
        tail->next=newNode;
        tail=newNode;
        size++;
       }
    }

    int pop() {
        Node * temp=head;
        
        while(temp->next==tail){
            temp=temp->next;
        }
        int td=tail->data;
        delete(tail);
        tail=temp;   
        size--;
        return td;
    }
       

    int top() {
        return tail->data;
    }
};