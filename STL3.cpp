#include<bits/stdc++.h>
using namespace std;
int main(){
   // pair<int,pair<char,int>> p={1,{'a',20}};

   // cout << p.first <<endl;
    //cout << p.second.first<<endl;
    //cout << p.second.second<<endl;

    vector<pair<int,int>> vec={{1,2},{3,4},{5,6}};

    vec.push_back({7,8});
    vec.emplace_back(7,8);
    for(pair<int,int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}