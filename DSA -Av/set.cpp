#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s ){
    for(string st: s){
        cout<<st << endl;
    }
}
int main(){

    set<string> st;
    st.insert("ajd");
    st.insert("kadj");
    st.insert("dhs");
    st.insert("sudg");
    auto it = st.find("sudg");
    if(it !=st.end())
    cout<<(*it)<<endl;
    else{
        cout<<"not found"<<endl;
    }
    print(st);
}