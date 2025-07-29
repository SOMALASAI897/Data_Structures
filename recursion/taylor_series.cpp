#include<bits/stdc++.h>
using namespace std;

double pow(double base, int power){
    if (power==0){
        return 1.0;
    }else{
        return base*pow(base,power-1);
    }
}

int facto(int f){
    if(f==0){
        return 1;
    }else{
        return f*facto(f-1);
    }
}


double e(int x, int n, int i=0){
    if(i>n){
        return 0;
    }else{
        return pow(x,i)/facto(i)+ e(x,n,i+1);
    }
}
int main(){
    int x= 2, n =5 ;
    cout<<e(x,n);
    return 0;
}