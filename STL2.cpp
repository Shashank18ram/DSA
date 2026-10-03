#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++);
    {
        cout<<*(it)<<endl;

    }
    cout<<endl;
   // vec.erase(vec.begin()+1,vec.begin()+3);// this will delete the 2nd value
    //vec.insert(vec.begin()+3,100);
    //for(int val : vec){
      //  cout<<val<<" ";
    //}
    //cout<<endl;
    return 0;
}
       