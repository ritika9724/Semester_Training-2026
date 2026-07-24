#include<iostream>
#include<vector>
#include<map>
using namespace std;

void createGraph(map<int, vector<int>> &graph){
    // vertex 10
    graph[10] = {7,20};  
    // vertex 7 
   graph[7] = {10};     
    // vertex 20
   graph[20] = {10,26,15};
    // vertex 26
    graph[26] = {20,15};
     // vertex 15
    graph[15] = {20,26};
} 
int main(){
    map<int, vector<int>> graph;
    createGraph(graph);

    for(auto n:graph[20]){            
    cout<<n<<" ";    
    
}
    return 0;
}
