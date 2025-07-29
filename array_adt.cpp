// most imp topic in array (array abstract data type)
#include<bits/stdc++.h>
using namespace std;

// array adt using classes and objects
class Array{
    private:
        int *arr;
        int size;

    public:
    //using constructor 
        Array(int size){
            this->size = size;
            arr = new int[size];
        }
        void create(){
            for (int i=0;i<size;i++){
                arr[i]= 7;
            }
        }
        void display(){
            for(int i=0;i<size;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    //deleting array using destructor 
        ~Array(){
            delete [] arr;
            cout<<"The array deleted successfully";
        }
};


int main(){
    Array array1(7);
    array1.create();
    array1.display();
    return 0;
}