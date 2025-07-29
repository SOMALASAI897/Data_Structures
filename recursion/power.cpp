#include<bits/stdc++.h>
using namespace std;


int power_cal(int a, int b){
    int i = b;
    if(i<1){
        return 1;
    }
    else{
        return a* power_cal(a,i-1);
    }
}
int main(){
    int a=2, b=4;
    cout<<power_cal(a,b);
    return 0;
}