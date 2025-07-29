#include<bits/stdc++.h>
using namespace std;
// using struct because it can store different type of datatypes in one single location 
struct Array{
    int A[10];
    int length;
    int size;
};

// void display function for displaying the array 
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}


// append function takes the arr as an input and then it adds the element to it 
void append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length]= x;
        arr->length++;
    }
}

// insert function adds the element at the position that has been instructed
void insert(struct Array *arr,int index , int x){
    if(index>=0 && index <arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]= arr->A[i-1];
        }
        arr->A[index]= x;
        arr->length ++;
    }
}


int main(){
    // assigning the values to the array and size and also length 
    struct Array array1 = {{1,2,3,4,5}, 5 , 10};

    // coding layer by layer - from displayin then append and finally insert 
    cout<<"The array : ";
    display(array1);
    cout<<endl;

    cout<<"After appending the array is : ";
    append(&array1, 6);
    display(array1);
    cout<<endl;

    cout<<"After inserting the final array is : ";
    insert(&array1,0,70);
    display(array1);
    return 0;
}