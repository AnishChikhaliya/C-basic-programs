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

// Print N=1e7+10 size to prime number 
// Sieve Algorithem

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N, 1);

int main (){
    
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; ++i){
        if(isPrime[i] == true){
            for(int j = 2*i; j < N; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=1; i < 100; ++i){
        cout << isPrime[i] << endl;
    }
}