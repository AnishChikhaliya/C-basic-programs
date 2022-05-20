// Map syntaxt and iterators using Range based loop & auto key word

/* creat a "int" key and "String" Value and assign the key accoding value and print sorting value
( All Value input User )  */


#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    int N;
    cout << "Enter total number of map you want to creat :" << endl; 
    cin >> N;
    cout << "Enter X and Y Value :" << endl; 
    for(int i=0; i<N; ++i){
    int x;
    string y;
    cin >> x >> y;
    m.insert({x,y}); 
    }
    for(auto &pr : m){
        cout << "Your Map Value :" << endl << pr.first << " " << pr.second << endl;
    }

} 

/* Given a list of N words. Count the number of words that appear exactly twice in the list. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout << "Enter number of string you want to creat :";
    cin >> N;
    unordered_map<string, int> m; // we use unordered map bcz ordered map timpe complexity is high O(logn) and in other side unorderd map time comlexity o(1) that's why we used UM
    int ct=0;
    cout << "Enter Strings:" << endl;
    for(int i=0; i<N; ++i){
        string s;
        cin >> s;
        m[s]++;  // Put a string into map means m[s]= m[s]+1 That count a frequency of string 
    }
    for(auto &it : m){
        // cout << it.first << " " << it.second <<endl;
        if(it.second==2){
            ct++;
        }
    }
    cout<< "Your Twice Repeat Total String :" << ct;
}