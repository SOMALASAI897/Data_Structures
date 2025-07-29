#include<bits/stdc++.h>
using namespace std;


int fibon(int x){
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i]=-1;
    }

    if(x<=1){
        arr[x]= x;
        return x;
    }

    else{
        if(arr[x]!=-1){
            return arr[x];
        }
        else{
            arr[x]= fibon(x-2)+ fibon(x-1);
            return arr[x];
        }
    }
}
int main(){
    int x = 5;
    cout<<fibon(x);
    return 0;
}