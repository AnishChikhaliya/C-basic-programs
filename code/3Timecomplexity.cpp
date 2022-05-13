#include<bits/stdc++.h>
using namespace std;

// Timecomplexity 

/**
int main(){
    int x;          // O(1)
    int sum=0;      // O(1)
    cin >> x;       // O(1)
    sum = x+x;      // O(1)
    cout << sum;    // O(1)
} **/

// iteration :-  The statemante Write in the Code is call as iteration. it's used to calculate a Timecomplexity
// Total iteration = O(4) 

// Find A complexity 
// below given n value
// N<100000
//a[i]<100000

/**
int main(){
    int n;                       //O(1)
    cin >> n;                    //O(1)
    for(int i=o; i<n; ++i){      //O(n)
        cin >> a[i];             //O(1*n)
    }
}**/

// complexity = O(1)+O(1)+O(n)+O(n) = O(n)

/**
int main(){
    int n;                       //O(1)
    cin >> n;                    //O(1)
    for(int i=o; i<n; ++i){      //O(n)
        for(int i=0; i<n; ++i) { //O(nn)
            
        }                                    
    }
}**/

// complexity = O(1)+O(1)+O(n)+O(n*n) = O(nn)

/**
int main(){
    int n;                       //O(1)
    cin >> n;                    //O(1)
    while(n>0){                  //O(log(n))
        n = n / 2;
    }
}**/

// complexity = O(1)+O(1)+O(log(n)) = O(log(n))