// https://leetcode.com/problems/reverse-linked-list/submissions/1084013623/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head, *ptr,*prev=NULL;
        while(p){
            ptr=p->next;
            p->next=prev;
            prev=p;
            p=ptr;
        }
        return prev;
    }
};

int main() {
	// your code goes here
	int t,max=pow(2,30);
	cin>>t;
	for(int x=0;x<t;x++){
    	int n,flag=0;
    	cin>>n;
    	for(int i=0;i<=n;i+=2){
    	    for(int j=1;j<=n;j+=2){
    	        if(((i|j)*(i^j))==n){
    	            cout<<i<<" "<<j<<endl;
    	            flag=1;
    	            break;
    	        }
    	    }
    	    if(flag) break;
    	}
    }
	return 0;
}
