/*
Given a matrix A of dimensions NxM. Check whether the sum
 of the ith row is equal to the sum of the ith column.
Note: Check only up to valid row and column numbers 
i.e if the dimensions are 3x5, check only for the first 3 rows and columns, i.e. min(N, M).
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> a[i][j];
        }
    }
    int s1 = 0, s2 = 0; 
    for (int i = 0; i < n; i++) {
        s1 = 0, s2 = 0;
        for (int j = 0; j < m; j++) {
            s1 += a[i][j];
            s2 += a[j][i];
        }
      
}
        if (s1 == s2){
            cout << 'T' << endl;
    }else {
        cout << 'F' << endl;
    }

}