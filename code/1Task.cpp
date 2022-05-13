#include <bits/stdc++.h>

using namespace std;


int main() {
    
  int n;
  cout << "Enter array Size: " << endl;
  cin >> n;
  
  int numbers[n], visited[n];

  cout << "Enter numbers: " << endl;

 
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";


  for (int j = 0; j < n; ++j) {
    cout << numbers[j] << "  " ;
    
  }
  
  for (int i=0; i<n; i++) {

        if(visited[i] == 1)
        continue;
        int count=1;
        for (int j=i+1; j<n; j++) { 

            if (numbers[i]==numbers[j]){

                visited[j] =1;
                count++;

            } 
        }
        cout<<"The number "<<numbers[i]<<" is repeated "<<count<<" times"<<"\n";
  }

  return 0;
}
