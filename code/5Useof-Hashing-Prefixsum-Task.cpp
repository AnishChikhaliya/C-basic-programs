/*
He is very much obsessed with palindromes. Given a string S of lower case
English alphabet of lengthNand two Integers L and R he wants to know whether 
all the letters of the substring from index L to R(L andRincluded) can be 
rearranged to form a palindrome or not. He wants to know this for Q values of L and R
and needs your help in finding the answer.
Palindrome isastring of characters which when reversed reads same as the original String.

CONSTRAINTS:
1 <= t <= 10
1 <= N, Q <= 100000
1 <= l <= R <= N
'a'<= S[i] <= 'z' for 1 <= i <= N

*/

// without use of pre computation

/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter Test case : ";
    cin >> t;
    while(t--){
        int n,q;
        cout << "Enter String length and Queries :-  ";
        cin >> n >> q;
        cout << "Enter String : ";
        string s;
        cin >> s;
        while(q--){
            int l,r;
            cout << "Enter L and R : ";
            cin >> l >> r;
            int hsh[26];
            for(int i=0; i<26; ++i){ // we simple put the hasing in charctor means assing the number for charctor
                hsh[i]=0;
            }
            l--;r--;
            for(int i=l; i<=r; ++i){
                hsh[s[i] - 'a']++;    // store the count in hsh array if s[i]=a than a-a=0 than 0 store in hsh array
            }
            int oddCt = 0;
            for(int i=0; i<26; ++i){  // in this loop calculate the odd count 
                if(hsh[i] % 2 != 0) oddCt++;
            }
            if(oddCt > 1) cout << "NO\n";
            else cout << "YES\n";
        } 
    }
}

*/

// Use of pre computation using both funtion Hasing & Prefixed sum
// Solustion :-
/* use of pre computation first we creat 26 array for each alphabat 
and each array creat prefixe sum array that why we can convert the 
infinite loop into 26 time */

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int hsh[N][26]; // the hsh creat a total 26 array of N size.

int main(){
    int t;
    cout << "Enter Test case : ";
    cin >> t;
    while(t--){
    // for(int i=0; i<N; ++i){
    //     for (int j=0; j<26; ++j){
    //         hsh[i][j]=0;
    //     }
    // }
        int n,q;
        cout << "Enter Queries :" ;
        cin >> q;
        cout << "Enter String length :" ;
        cin >> n;
        cout << "Enter String : ";
        string s;
        do {
            cin >> s;
        }
        while(s.size() > n); cout << "error";
        
        for(int i=0; i<n; ++i){
            hsh[i+1][s[i]-'a']++;   // store the count value for i idex in n numbers of hsh array 
        }
        // now creat a prefixed sum array for all hsh array
        for(int i=0; i<26; ++i){
            for(int j=1; j<=n; ++j){
                hsh[j][i] += hsh[j-1][i];  // add a prefixed sum value in j index 
            }
        } 
        while(q--){
            int l,r;
            cout << "Enter L and R : ";
            cin >> l >> r;
            int oddCt = 0;
            for(int i=0; i<26; ++i){
                int charCt = hsh[r][i]-hsh[l-1][i];
                if( charCt % 2 != 0) oddCt++;
            }
            if(oddCt > 1) cout << "NO\n";
            else cout << "YES\n";
        } 
    }
}