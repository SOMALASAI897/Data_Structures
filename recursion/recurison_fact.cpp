#include<bits/stdc++.h>
using namespace std;


int fact(int a){
    if (a==0){
        return 1;
    }else{
        return fact(a-1)*a;
    }
}
int main(){
    int x = 5;
    cout<<fact(x);
    return 0;
}