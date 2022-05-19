/*
Given array a of N integers. GivenQqueries
and in each query givenLandRprint sum of
array elemnts from indexLto R(L,Rincluded)

Constraints
1<=N<= 10^5
1 <= a[i] <= 10^9
1<=Q<= 10^5
1<= L,R<=N
*/

//What is pre computation techniques?

/*
In algorithms, precomputation is the act of 
performing an initial computation before run
time to generate a lookup table that can be 
used by an algorithm to avoid repeated computation 
each time it is executed
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N]; // prefix sum array that store tha all of the elemant sum value  
//int g[10];
//If the global variable is not initialized, it takes zero by default.
//If the local variable is not initialized, it takes the garbage value by default.
int main(){
    int n;
    //int b[5];
    cout << "Enter array size : " << endl;
    cin >> n;
    cout << "Enter array elemant : " << endl;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        // cout << pf[i-1] << " -1 index" << " b[0] is " << b[0] << " --" <<  g[0] << " g";
        pf[i] = pf[i-1] + a[i]; // that is work as a EX = ( [0,0+1=1,1+2=2,2+3=3,...etc]) 
    }

    int q;
    cout << "Enter number of query  : " << endl;
    cin >> q;
    cout << "Enter L and R value : " << endl;
    while(q--){
         int l,r;
         cin >> l >> r;
         cout << "Your Sum is : " << a[r]-a[l-1] << endl; // that is use to get the sum of l and r form the pf array 
    }

}

// without using pre computation 

/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];  

int main(){
    int n;
    cout << "Enter array size : " << endl;
    cin >> n;
    cout << "Enter array elemant : " << endl;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        
    }

    int q;
    cout << "Enter number of query  : " << endl;
    cin >> q;
    cout << "Enter L and R value : " << endl;
    while(q--){
         int l,r;
         cin >> l >> r;
         long long sum = 0;
         for(int i=l; i<=r; ++i){
             sum+=a[i];
         }
         cout << sum <<
    }

}
*/

// O(N) + O(Q*N) = 10^10