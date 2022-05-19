/* Xsquare got bored playing with the arrays all the time. Therefore, he has decided to play with the strings. Xsquare called a string P a "double string" if string P is not empty and can be broken into two strings A and B such that A + B = P and A = B. for eg : strings like "baba" , "blabla" , "lolo" are all double strings whereas strings like "hacker" , "abc" , "earth" are not double strings at all.

Today, Xsquare has a special string S consisting of lower case English letters. He can remove as many characters ( possibly zero ) as he wants from his special string S. Xsquare wants to know , if its possible to convert his string S to a double string or not.

Help him in accomplishing this task. */

#include<bits/stdc++.h>

using namespace std;

int main(){

int t;

cin>>t;

while(t--){

 string s;

 cin>>s;

 int a[26];

 for(int i=0;i<26;i++){

  a[i]=0;

 }

 for(int i=0;i<s.size();i++){

  a[s[i]-'a']++;

 }
  
  
 int f=0;

 for(int i=0;i<26;i++){

  if(a[i]>1){

   f=1;

   break;

  }

 }

 if(f==1)

  cout<<"Yes"<<endl;

 else

  cout<<"No"<<endl;

}

}