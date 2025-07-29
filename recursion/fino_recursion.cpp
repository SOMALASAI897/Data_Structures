#include<bits/stdc++.h>
using namespace std;

int fibon(int a){
    if (a==1 || a==0){
        return 1;
    }
    else{
        return fibon(a-1) + fibon(a-2);
    }
}
int main(){
    int x = 7;
    cout<< fibon(x);
    return 0;
}