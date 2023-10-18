



#include<bits/stdc++.h>
using namespace std;


class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };


Node *merge(Node *left, Node *right)
{

    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    Node *newnode = new Node(-1);
    Node *temp = newnode;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    newnode = newnode->next;

    return newnode;
}

Node *findingMid(Node *&head)
{
    // Node* temp=head;
    Node *slow = head;
    Node *fast = head->next;

    while (fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

 
    Node *mid = findingMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    Node *result = merge(left, right);

    return result;
}