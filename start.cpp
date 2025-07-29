#include<iostream>
using namespace std;

// function prototiping

void fun_child(int);
void fun(int);

int main(){
    int x = 20 ;
    fun(20);
    return 0;
}

void fun(int a){
    if(a>0){
        cout<<a<<endl;
        fun_child(a);
    }
}

void fun_child(int b){
    if (b>1){
        cout<<b<<endl;
        fun(b/2);
    }
}