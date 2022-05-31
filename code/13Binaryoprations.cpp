// Playing With Binary Numbers

#include<bits/stdc++.h>
using namespace std;

// print decimal to binary 

void printBinary(int num){
    for(int i=10; i>=0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){
    cout << "Enter number To Binary :" << endl;
    int num;
    cin >> num;

    // print decimal to binary 

    cout << "Your Binary Number :" << endl;

    printBinary(num);

    // Print ith bit set or not 
    
    int ith;
    cout << "Enter ith index :" << endl;
    cin >> ith;

    if((num & (1 << ith)) != 0){
        cout << "SET" << endl;
    }else{
        cout << "NOT SET" << endl;
    }

    // convert set bit 

    cout << "Your ith convert set :" << endl;

    printBinary(num | (1 << ith));

    // convert unset bit

    cout << "Your ith convert unset :" << endl;

    printBinary(num & (~(1 << ith)));

    // toggle 

    cout << "Your ith is toggle :" << endl;

    printBinary(num ^ (1 << ith)); 

    // count set bit 

    cout << "Your count of setbits :" << endl;

    int ct = 0;
    for(int ith=31; ith>=0; --ith){
        if((num & (1 << ith)) != 0){
        ct++;
        }
    }
    cout << ct << endl;

    // chek number is even or odd

    if(num & 1){
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;
    }

    // Convert Uppercase to Lowercase

    char N;
    cout << "Enter Uppercase Latter :" << endl;
    cin >> N;
    cout << "Your Lowercase latter is :" << endl;
    cout << char(N | ' ') << endl; 

    // Convert Lowercase to Uppercase
    
    char n;
    cout << "Enter Lowercase Latter :" << endl;
    cin >> n;
    cout << "Your Uppercase latter is :" << endl;
    cout << char(n & '_') << endl; 

    // To clear MSB or LSB

    cout << "Your Clear LSB is :" << endl;
    int lsb = (num & (~((1 << (ith+1))-1))); // To clear LSB
    cout << lsb << endl;

    cout << "Your Clear MSB is :" << endl;
    int msb = (num & ((1 << (ith+1))-1)); // To clear MSB
    cout << msb << endl;

    // Check Pow of 2 or not 

   if(num & (num -1)){
       cout << "NOT POW OF 2" << endl;
   }else{
       cout << "YES" << endl;
   }
}
