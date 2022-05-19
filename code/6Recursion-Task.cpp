// Task using Recursion function 

/* Given a positive integer n, find the nth fibonacci number. 
Since the answer can be very large, return the answer modulo 1000000007. */

#include<bits/stdc++.h>
using namespace std;

long long nthfn(long long int n){

    if (n==2 || n==1) return 1;   // base statement for using end the infinite loop 
    const long long int M=1000000007; 

       return (nthfn(n-1)%M + nthfn(n-2)%M)%M;  // recursion function  
}

int main(){
    long long int n;
    cout << "Enter number you want to find :";
    cin >> n;
    cout << "Your Number Fibonacci is : " << nthfn(n);
}

// Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

/*
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){

    if (n==2 || n==1){  // base statement for using end the infinite loop
        
         return 1;    

    } else {
        return(fibo(n-1) + fibo(n-2));  // recursion function 
    } 
}

int main(){
    int n,i=0;
    cout << "Enter number you want to find :";
    cin >> n;
    cout << "\nYour Number Fibonacci is : \n";

    while(i<n)
    {
        cout << fibo(i);
        i++;
    }  

    return 0; 
} */ 