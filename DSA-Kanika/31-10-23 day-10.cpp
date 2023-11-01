// https://leetcode.com/problems/delete-node-in-a-linked-list/

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
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

//note: i forgot to push this code yesterday 