#include<bits/stdc++.h>
#include "node.cpp"
using namespace std;


void insertNode(Node* head,int num,int data){
    Node* temp=head;
    Node* newNode=new Node(data);
    int count=1;
    while(temp !=NULL && count<num-1){
        temp=temp->next;
        count++;
    }
    if(temp !=NULL){
    Node* tempNext=temp->next;
    temp->next=newNode;
    newNode->next=tempNext;
    }
}

Node* takeInput(){
    int data;
    cin>>data;
    Node * head=NULL;
    
    while(data != -1){
        Node * newNode= new Node(data);
        if(head ==NULL){
            head=newNode;
        }else{
            Node * temp=head;
            while(temp->next !=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }

        cin>>data;

    }
            return head;
}


void printNode(Node * head){
    Node* temp=head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


int main(){

    // statically 

    // Node n1(24);
    // Node * head=&n1;
    // Node n2(67);
    // n1.next=&n2;
    // Node n3(6);
    // n2.next=&n3;

    // printNode(head);


    //=================================================================

    // dynamically?


    Node * n1=new Node(34);
    Node * n2=new Node(3);
    Node * n3=new Node(334);
    Node * n4=new Node(332);
    Node* hea =n1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    printNode(hea);
    Node *head = takeInput();
    insertNode(head,2,34);
    printNode(head);






}