/* The binary search are used to divied method to easy fid
element and time complexiy is longb2(N)   */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i]; 
    }
    int N;            // N is a find elemant we want to find inside of array
    cin >> N;
    int fi=0;         // we used li(Last index) and fi(First index) for find the mid index of array 
    int li=n-1;       
    int mid;
    while(li - fi > 1){    // this condition are used to stope a loop if last to element inside of array to compare 
        int mid = (li + fi) / 2;  // find mid
        if(a[mid] < N){    
           fi = mid + 1;     // change the first index  after compare to N and move to right side 
        }else{
            li = mid;        // change the last index  after compare to N and convert your mid index to li 
        }
    }
    if(a[fi]==N){
        cout << fi;
    }else if(a[li]==N){
        cout << li;
    }else{
        cout << "NOT FOUND"; 
    }
}