// https://leetcode.com/problems/middle-of-the-linked-list/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//my brute force approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ans=head;
        int count=0;
        while(head){
            count++;
            if(count/2>(count-1)/2) ans=ans->next;
            head=head->next;
        }
        return ans;
    }
};

//optimized approach after checking solutions
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(slow&&fast){
            fast=fast->next;
            if(fast){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }
};