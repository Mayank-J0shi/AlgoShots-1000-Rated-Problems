#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
   int n;cin>>n;
   unordered_map <int, int> mpp;
   for(int i=1;i<n;i++){
      int a,b;
      cin>>a>>b;
      if(mpp.find(a)!=mpp.end()){
         mpp[a]=mpp[a]+1;
      }else{
         mpp[a]=1;
      }
      if(mpp.find(b)!=mpp.end()){
         mpp[b]=mpp[b]+1;
      }else{
         mpp[b]=1;
      }
   }
   int count=0;
   for(auto it: mpp){
      if(it.second==1)  
         count++;
   }
   cout<<count;
}