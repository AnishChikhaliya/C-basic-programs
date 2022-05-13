#include <bits/stdc++.h>
using namespace std;

// (1) compilation Error

/**
int main()
{
    string str;
    cout << "Enter your Name : " << endl, // syntaxt error
    cin >> str;
    cout << "Hello " >> str; // syntaxt error
  
    return 0;
} **/

// (2) Memory Limit Exceed Error (MLE)

/**
const int N=1e18; // The array size bigger than memory size 
int a[N];

int main(){
    for(int i=0; i<N; ++i){
        a[i]=i;
    }
    cout << a[N-1];
} **/

// (3) Runtime Error 

/*
const int N=1e4; //You declared N size of array
int a[N];

int main(){
    for(int i=0; i < 4*N; ++i){ // You try to access 4*N size of array than show tha Runtime Erroor
        a[i]=i;
    }
    cout << a[N-1];
} */
    
      //(3.1) Undefined Runtime Error
/**
int main(){

    int a= 4 / 0; //You decleard undefined value

    cout << a;
} */

// (4) Time Limit Error (TLE)

    // Time limit Error it's depand on the recursion 
    // Recursion :- You can call the funtion in same function is call as Rcursion
/**
const int N=1e9;
const NN=1e4;
int a[NN];

void func(int i){ // In this code we declared function in same function that's why show a TLE error
    if(N<=i) retrun;
    a[i%NN]=i;
    func(i+1);
}

int main(){
    func(0);
} **/

   //Now blow code use a function in same function but that show a runtime error why?
/**
void func(int i){
    func(i+2);
    func(i+1);
    func(i-1);
}
int main(){
    func(0);
}
// Ans
in this code we declared function in same function but TLE depandes on Stack and
stack was a limites storage that's why the function are overflow before the 1 sec 
and memory issuse alway show a runtime error. */

