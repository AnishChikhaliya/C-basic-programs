/*
Problem
Here is another task for you, prepared by Monk himself. So, this is how it goes :

Given an integer array A of size N, Monk needs you to answer T queries for him. 
In each query, he gives you 2 integers P and Q. In response to each of these queries, 
you need to tell Monk the count of numbers in array A. that are either divisible by P, Q, or both.

Sample Input
6
2 3 5 7 4 9
2
4 5
3 7

Sample Output
2
3
*/



#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; ++i){
        cin >> A[i];
    }
    int t;
    cin >> t;
    while(t--){
        int p,q;
        cin >> p >> q;
        int ct = 0;
        for(int i=0; i<N; ++i){
            if(A[i] % p == 0) ct++;
            if(A[i] % q == 0) ct++;
        } 
         cout << ct;
    }   
    
}