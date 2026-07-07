#include<iostream>
using namespace std;

template <class T>
class vector{
    T*ptr;
    int size;
    public:
    vector(int s){
        ptr = new T[size=s];         // new int()   // new int [10]
        for(int i=0; i<size; i++){
            ptr[i]=0;
        }
    } 

    vector(T *arr, int s){
        ptr = new T[size=s];         
        for(int i=0; i<size; i++){
            ptr[i]=arr[i];
        }
    } 

    void show(){
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }

    T &operator[](int i){
        return prt[i];
    }
};

int main(){
    vector<int>v1(10);
    v1.show();
    int arr[]={10,20,30,40,50};
  
    vector <int>v2(arr,5);
  
    v2.show();
    cout<<v2[3];
    return 0;
}


