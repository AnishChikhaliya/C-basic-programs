/*
We know that prime numbers are positive integers that have exactly two distinct positive divisors. 
Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.
You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

EX :-
Input         
3
4 5 6

Output
YES
NO
NO
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 

    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 

bool isThree(int n)
{

    int sq = (int)sqrt(n);

    if (1LL * sq * sq != n)
        return false;

    return isPrime(sq) ? true : false;
}

int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0; i<n; ++i){
       cin >> a[i];
   }
   for(int i=0; i<n; ++i){
       if(isThree(a[i])){
           cout << "YES" << endl;
       }else{
           cout << "NO" << endl;
       }
   }
   
    
}

// Using binery search 

#include<bits/stdc++.h>
using namespace std;

int isPrime(int num){
    
    if(0 == num % 2 || num < 2){
        return 0;
     }else return num;
}


int isThree(int num){

    int sq = (int)sqrt(num);

    return isPrime(sq) ? num : 0;
}

int main(){
    int s;
    cin >> s;
    int a[s];
    for(int i=0; i<s; ++i){
        cin >> a[i];
    }
    int fi = 0;
    int li = s-1;
    int mid;
    
    while(li - fi > 1){
        int mid = (li + fi) / 2;
        int pr = isPrime(a[mid]);
        if(a[mid] == pr){
            cout << "NO" << endl;
            fi = mid + 1;
            cout << a[fi];
        }else if(a[mid] != isThree(a[mid])){
            cout << "YES" << endl;
            li = mid;
        } 
    }
}