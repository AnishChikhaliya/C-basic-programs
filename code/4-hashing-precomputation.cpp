// Using hashing function pre-computation 

/*
Given array a of N integers.Given Q queries
and in each query givenanumber X,print
count of that number in array.
Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];

int main() {
    int n;
    cout << "Enter array size : " << endl;
    cin >> n; 
    int a[n];
    cout << "Enter array elemant : " << endl;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        hsh[a[i]]++; // this hash array store the all enter elemant count value 
    }
    int q;
    cout << "Enter total number of quary : " << endl;
    cin >> q; // input the total quary (test case/total number of count )
    cout << "Enter count number : " << endl;
    while(q--){
        int x;
        cin >> x;
        cout << "your number :" << endl << hsh[x] << endl; // this hsh is call a index of store elemant and display the count 
    }


    return 0;
}

// Without using hashing 
/*
int main() {
    int n;
    cout << "Enter array size : " << endl;
    cin >> n; 
    int a[n];
    cout << "Enter array elemant : " << endl;
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    int q;
    cout << "Enter total number of quary : " << endl;
    cin >> q; // input the total quary (test case/total number of count )
    cout << "Enter count number : " << endl;
    while(q--){
        int x;
        cin >> x;
        int ct =0;
        for(int i=0; i<n; ++i){
            if(a[i]==x){
                ct++;
            }
            cout << ct << endl; 
        }
    }


    return 0;
}
*/
//O(N)+O(Q*N) = 10^10
