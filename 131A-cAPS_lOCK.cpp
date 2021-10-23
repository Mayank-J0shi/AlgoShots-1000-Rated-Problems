#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int count=0;
   for(int i=1;i<s.length();i++){
      if(s[i]>='A' and s[i] <= 'Z')
         count++;
   }
   if(count == s.length()-1){
      if(s[0]>='a' and s[0]<='z'){
            s[0]-=32;
      for(int i=1;i<s.length();i++){
            s[i]+=32;  
      }
      }
   else{
         s[0]+=32;
      for(int i=1;i<s.length();i++){
         s[i]+=32;
      }
   }
   }
   cout<<s;
}