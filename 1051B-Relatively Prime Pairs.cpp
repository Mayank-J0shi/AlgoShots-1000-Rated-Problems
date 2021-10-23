#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
int main(){
   ll l,r;cin>>l>>r;
   cout<<"YES"<<"\n";
   pair <ll,ll> p[(r-l+1)/2];ll j=0;
   for(ll i=l;i<=r and j<(r-l+1)/2+1 ;i+=2,j++){
      p[j].first=i;
      p[j].second=i+1;
   }
   for(auto it : p){
      cout<<it.first<<" "<<it.second<<"\n";
   }
}