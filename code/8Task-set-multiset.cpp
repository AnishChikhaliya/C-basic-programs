/*
   Perform Those Condition for test case using Multiset 
  : Add an element  to the set.
  : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
  : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    multiset<int> s;
    cout << "Enter number of test case :";
    cin >> N;
    cout << "Enter 1 Add an element and Enter elemant Value y." << endl;
    cout << "Enter 2 Remove element and Enter elemant Value y." << endl;
    cout << "Enter 3 Check element and Enter elemant Value y." << endl;
    for(int i=0; i<N; ++i){
        int x,y;
        cin >> x >> y;
        switch (x){  // we can use switch case method to perform a cases
            case 1:
                s.insert(y);
                break;
            case 2:
                s.erase(s.find(y)); // in this function remove only one elemant that look same 
                break;
            case 3:
                cout << (s.find(y) == s.end() ? "NO" : "YES") << endl;
                break;
        }
    }

}
