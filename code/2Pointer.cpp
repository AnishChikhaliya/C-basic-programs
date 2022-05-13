#include <bits/stdc++.h>
using namespace std;

// void incremant(int &x){
//     x++;
// }

// int main(){
    
//     int x=5;
//     cout << x << endl;
//     incremant(x);
//     cout << x << endl;
// }
    
    int main(){
    int x=4;
    int *p_x=&x;
    
    cout << "address of x: " << p_x << endl; // p_x equal to &x both are defind a address 
    
    cout << "val of *p_x :" << *p_x << endl;// value at p_x
    
    *p_x=5; // change the pointer value direct in memory  
    
    
    cout << "val of *p_x :" << *p_x << endl; // show a new value of p_x
    
    cout << "address of p_x + 1 :" << p_x+1 << endl; // alocat a new address also kknow as addition
    

    // double pointere 
    
    int **p_p_x = &p_x;
    
    cout << "val of **p_p_x :" << **p_p_x << endl; 
    
    cout << "address of *p_p_x :" << *p_p_x << endl;
    
    cout << "val of **p_p_x :" << **p_p_x << endl;
    }