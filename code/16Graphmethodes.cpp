// preseant a graph method

// The Graph is 
/*
    Undirection Graph
    vertax V -3
    Eages E - 2
                        (0)------(1)  
                                  |
                                  |
                                  |
                                 (2)

*/
/*
      List - in this creat a list of V and store a all E connection 
      EX -    0 - 0
              1 - 0, 2
              2 - 1
      Matrix - we creat a V X V matrix 
      EX - Creat 3 X 3 matrix graph[3][3]
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;

int g1[N][N]; // Creat a matrix of v X v

vector<int> g2[N]; // Creat a list and store in vector  EX  vector - 0  1  2 
                   //                                                0 0,2 1

int main(){
    int n,m;
    cin >> n >> m; // input of V or E 
    for(int i=0; i<m; ++i){
        int v1,v2;
        cin >> v1 >> v2; // input of connection of v 

        g1[v1][v2] = 1; // bcz of undirection graph 1-->2 
        g1[v2][v1] = 1; // than possible 2-->1 

        // in Adj Matrix Space Complexity is  O(N^2) and N = 10^5 max size max input are not possible in Matrix 

        // Using List
        g2[v1].push_back(v2); // Now We assign a connection of v1 or v2 and store in vector of g2
        g2[v2].push_back(v1); 
        
        // List Space Complexity O( N + M ) this are lessthen Matrix S.C Mostly we used List in Graph 
    }

}