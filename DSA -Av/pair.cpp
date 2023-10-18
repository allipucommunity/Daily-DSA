#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> pr;
    // pr=make_pair(2,"hsdf");
    pr={2,"hshdo"};
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<int,string> &pt=pr;
    pt.first=3;
    cout<<pr.first<<" "<<pr.second<<endl;
    cout<<pt.first<<" "<<pt.second<<endl;


    pair<int,int> ok[3];
    ok[0] ={1,2};
    ok[1] = {2,4};
    ok[2] ={3,5};

    swap(ok[0],ok[2]);

    for(int i=0;i<3;i++){
        cout<<ok[i].first << " " << ok[i].second<<endl;
    }


}