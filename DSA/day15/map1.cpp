#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,string>mp={
        {101,"Riya"},
        {102,"Aman"}
    };

    // mp[101] = "Riya CSE";
    mp[103] = "Sita";
for(auto a:mp){
    cout<<a.first<<" "<<a.second<<endl;    // first represent key  second represent value
}
}