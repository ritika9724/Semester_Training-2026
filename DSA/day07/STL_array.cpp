#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

                            // in array work on indexing
                            
int main(){
    array<int,5> arr = {50,20,40,10,30};

    cout<<"Original Array\n";
    for(auto x : arr)       // auto is anything like if we add int value it is int, float value it is float etc.
    cout<<x<<" ";


    cout<<"\n\nAccessing Elements\n";
    cout<<"Front : "<<arr.front()<<endl;
    cout<<"BacK : "<<arr.back()<<endl;
    cout<<"At(2) : "<<arr.at(2)<<endl;
    cout<<"index 3 : "<<arr[3]<<endl;

    cout<<"Size : "<<arr.size()<<endl;
    cout<<"Max Size : "<<arr.max_size()<<endl;
    cout<<"Is Empty : "<<arr.empty()<<endl;

    arr.fill(100);    // fill = all values = 100

    cout<<"\nAfter fill\n";
    for(auto x:arr)
    cout<<x<<" ";

    array<int,5> arr2 = {5,4,3,2,1};

    arr.swap(arr2);

     cout<<"\nAfter swap\n";
    for(auto x:arr)
    cout<<x<<" ";

    sort(arr.begin(),arr.end());      // any container if we find the first address we use begin for last address we use end
    
     cout<<"\n\n After sort()\n";
    for(auto it=arr.begin();it!=arr.end();it++)      // it = pointer 
    cout<<*it<<" ";

    reverse(arr.begin(),arr.end());

    cout<<"\n\n Reverse Iterator\n";
    for(auto it=arr.rbegin();it!=arr.rend();it++)     // rbegin = reverse begin rend = reverse end
    cout<<*it<<" ";

    return 0;
}