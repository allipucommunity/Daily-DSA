// https://leetcode.com/problems/intersection-of-two-linked-lists/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int length(ListNode *head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA ||!headB) return NULL;
        int lengtha=length(headA),lengthb=length(headB);
        if(lengtha>lengthb){
            while(lengtha!=lengthb){
                headA=headA->next;
                lengtha--;
            }
        }
        else{
             while(lengtha!=lengthb){
                headB=headB->next;
                lengthb--;
            }
        }
        while(headA!=headB && headA!=NULL){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};