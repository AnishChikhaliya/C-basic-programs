// Binary Multiplication Formula for large value 

#include<bits/stdc++.h>
using namespace std;

long long M = 1e18;

int binarymul(long long a, long long b){
    int ans = 0;
    while(b>0){
        if(b&1){
             ans = (ans+a)%M;
        }
        a = (a+a)%M;
        b>>=1;
    }
    return ans;
}

int main(){
    cout << binarymul(102241, 102485);
}

