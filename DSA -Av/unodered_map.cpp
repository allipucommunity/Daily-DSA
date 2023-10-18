#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> mp;
    mp[3] = "assd";
    mp[4] = "asasddd";
    mp[1] = "ask";
    mp[2] = "as";

    mp.insert(make_pair(5, "yhkab"));
    mp.insert({8, "ehfh"});

    // map<int,string> :: iterator it;

    // for(it=mp.begin();it!=mp.end();++it){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    cout << mp.size() << endl;
    for (auto &show : mp)
    {
        cout << show.first << " " << show.second << endl;
    }

    //-------------------------------------------------------------------------------------------------------------------------------------
    cout << "finding value in map" << endl;
    auto it = mp.find(3);  //  O(log(n)) 
    if (it == mp.end())
    {
        cout << "NO";
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    //--------------------------------------------------------------------------------------------
    cout<<"erased the elemwnt  of map"<<endl;
    mp.erase(4);          // log(n)

     for (auto &show : mp)
    {
        cout << show.first << " " << show.second << endl;
    }
}
