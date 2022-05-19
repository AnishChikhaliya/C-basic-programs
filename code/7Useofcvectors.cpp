// In this code we study how to use vector

#include<bits/stdc++.h>
using namespace std;

// pairs inside of vector

void printvec(vector<pair<int,int>> v){
     cout << "Vector size :" << v.size() << endl;
     cout << "Pairs in vector :" << endl;
     for(int i=0; i < v.size(); ++i){
         cout << v[i].first << " " << v[i].second << endl;
    }
     cout << endl;
}

int main(){
    vector<pair<int,int>> v;  // that is creat a {{x,y},{x,y}} type vector
    int n;
    cout << "Enter Total Number of pair :";
    cin >> n;
    for(int i=0; i<n; ++i){
        int x,y;
        cout << "Enter pair elemant :";
        cin >> x >> y;
        v.push_back({x,y});
    }
    printvec(v);

}

// what is array of vector

/* In the array of vector we creat a N vector v[N] this syntax represent we creat a N number of vector. 
in array this syntaxt represent as a creat a array inside of N elemant  */

void printvec(vector<int> v){
     cout << "Vector size :" << v.size() << endl;
     cout << "vector :" << endl;
     for(int i=0; i < v.size(); ++i){
         cout << v[i] << " ";
    }
     cout << endl;
}

int main(){
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i=0; i<N; ++i){
        int n;
        cin >>n;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x); // in this v[i] not a index that present a ith vector 
        }
    }
    for(int i=0; i<N; ++i){
        printvec(v[i]);
    }
}

// What is vector of vector 

/* In vector of vetor we store multiple vector in above code we creat all store in one vector 
simple we creat a vector v and push back the creat multiple vector */

void printvec(vector<int> v){
     cout << "Vector size :" << v.size() << endl;
     cout << "vector :" << endl;
     for(int i=0; i < v.size(); ++i){
         cout << v[i] << " ";
    }
     cout << endl;
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v; // in this line we creat a vector in vector 
    for(int i=0; i<N; ++i){
        int n;
        cin >>n;
        v.push_back(vector<int> ()); // This Line Store a vectors in vector using push back function
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x); // in this v[i] not a index that present a ith vector 
        }
    }
    for(int i=0; i<N; ++i){
        printvec(v[i]);
    }
}