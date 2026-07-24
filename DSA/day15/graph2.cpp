#include<iostream>
#include<vector>
using namespace std;

void createGraph(vector<int> arr[]){
    // vertex 0
    arr[0].push_back(2);  
    // vertex 1  
    arr[1].push_back(2);    
    arr[1].push_back(3);
    // vertex 2
    arr[2].push_back(0);    
    arr[2].push_back(3);
    arr[2].push_back(1);
    // vertex 3
    arr[3].push_back(1);
    arr[3].push_back(2);
} 
int main(){
    int v= 4;
    vector<int>arr[v];
    createGraph(arr);

    for(int i=0; i<arr[3].size(); i++){
        cout<<arr[3][i]<<" ";
    }

    return 0;
}
