#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,vector<int>>mp={
        {101,{10,20,30}},
        {102,{11,22,33}}
    };

    mp[103] = {31, 32, 33};

for(auto a:mp){            // 101: {10, 20, 30}
    cout<<a.first<<" ";    
    for (auto val:a.second)
        cout<<val<<" ";
    cout<<endl;
}
}
