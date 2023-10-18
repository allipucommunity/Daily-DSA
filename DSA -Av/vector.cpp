#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> s)
{
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

void printvecpair(vector<pair<int, int>> &s)
{
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i].first << " " << s[i].second << endl;
    }
}

void prtvectorArray(vector<int> &s)
{
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i]<<" ";
    }
}

int main()
{
    // vector<int> s;

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     s.push_back(x);
    // }
    // printvec(s);

    ///----------------------------------------------------------------------------------------------------------------------

    // VECTOR WITH PAIR

    // vector<pair<int, int>> v = {{2, 3}, {3, 4}, {4, 5}, {5, 6}};
    // printvecpair(v);
    // vector<pair<int, int>> v2;
    // int N;
    // cin >> N;
    // // vector<int> v[N];

    // for (int i = 0; i < N; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     //here we can use also make_pair()
    //     // v2.push_back(make_pair(x,y));
    //     // v2.push_back({x, y});
    // }
    // printvecpair(v2);


    //------------------------------------------------------------------------------------------------------------------------------------
            // vector of array



            int n;
            cin>>n;
            vector<int> v[n];

            for(int i=0;i<n;i++){
                int no;
                cin>>no;
                for(int j=0;j<no;++j){
                    int x;
                    cin>>x;
                    v[i].push_back(x);

                }
                for(int i=0;i<n;++i){
                    prtvectorArray(v[i]);
                }
            }





}