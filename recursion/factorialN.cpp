#include<bits/stdc++.h>

using namespace std;

int fib(int n){

    if(n==1){
        return 1;
    }

    return n*fib(n-1);
}

int main(){
    cout<<fib(10);
    return 0;
}