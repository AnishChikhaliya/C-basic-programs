// Basic algorithem used in STL

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin >>  v[i];
    }

int min = *min_element(v.begin(),v.end()); // provid the min value in vector we don't write '*' other wise provide the min value address 
cout << min << endl;

int max = *max_element(v.begin(), v.end()); // provid the max value in vector we don't write '*' other wise provide the max value address
cout << max << endl;

int sum = accumulate(v.begin(),v.end(),0); // used to  calculate all element sum 0 has initial value of sum (sum = 0;)
cout << sum << endl;

int ct = count(v.begin(),v.end(),2); // count all the value inside of vector '2' is value we count 
cout << ct << endl;

auto it=find(v.begin(),v.end(),10); // find is used to find element inside of vector '10' is an element we won't to find.   
if(it!=v.end())                     // if 10 was not in vector in that case provid the .end() vale (garbage value)
    cout <<*it << endl;
else
    cout <<"Element not found\n";

reverse(v.begin(),v.end()); // used to print a reverse element 
for(auto val:v){
    cout << val <<" ";
}   
}
                                                 // Note
                        /* all of the above was the case of vector but we also used 
                        in array simply write v.begin() = v bcz v array denoted a address of v[0]
                        and v.end()= v+n bcz array was an n size in that case n is also consider as a end of element 
                        v was a first than v+n is a end of next element */

// Bool basic  algorithem and Lamda Function 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }

    // [](int x, int y){return x+y;}(2,3); // creat a lamda function 
    // auto sum = [](int x, int y){return x+y;}; // in this case you creat temp sum function 
    // cout << sum(5,9);

// Now we used all_of , any_of and non_of all function provide a 0 or 1 ans 

int all = all_of(v.begin(), v.end(), [](int x){return x > 0;}); // chek all element are passed to condition if any 1 of passed not through the condition than retrun 0 
cout << all << endl;

int any = any_of(v.begin(), v.end(), [](int x){return x > 0;}); // chek each element are passed to condition if any 1 of passed through the condition than retrun 1
cout << any << endl;

int none = none_of(v.begin(), v.end(), [](int x){return x > 0;}); // chek all element are passed to condition if all of passed not through the condition than retrun 1
cout << none << endl;

}








