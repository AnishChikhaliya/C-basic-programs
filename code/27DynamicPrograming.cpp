#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[N];

// Top Down

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Memoization 

    if(dp[n] != -1) return dp[n]; // That line also reduce the time complexity O(2^n) ---> O(N)

    return dp[n] = fib(n-1) + fib(n-2); // that function store a calulate value in dp array bcz thay don't claulate again 
}

int main(){

    memset(dp, -1, sizeof(dp)); // memset are used to fillup a full array or string in number 0 or -1 and only char are allow to used memset
    int n;
    cin >> n;

    cout << fib(n) << endl; 
    
}
