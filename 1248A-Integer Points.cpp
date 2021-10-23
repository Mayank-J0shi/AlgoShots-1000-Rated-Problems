#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
void solve(){
   ll n;cin>>n;
   ll ne=0,me=0;
   for(int i=0;i<n;i++){
      ll s;cin>>s;
      if(s%2==0)
         ne++;
   }
   ll m;cin>>m;
   for(int i =0;i<m;i++){
      ll s;cin>>s;
      if(s%2==0)
         me++;
   }
   ll ans =me*ne+(n-ne)*(m-me);
   cout<<ans<<"\n";
}
 
 
int main(){
   int t;cin>>t;
   while(t--){
      solve();
   }
}