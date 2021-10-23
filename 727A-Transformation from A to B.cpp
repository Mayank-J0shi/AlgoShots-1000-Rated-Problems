#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
   ll a,b;cin>>a>>b;
   ll count=1;bool flag=true;
   vector<ll> path;
   path.push_back(b);
   while(b>a){
      if(b%2==0){
         b=b/2;
         path.push_back(b);
      }else{
         if(b%10==1){
            b=b/10;
            path.push_back(b);
         }else{
            flag=false;
            break;
         }
      }
      if(flag==false){
         break;
      }
      count++;
   }
   if(flag==false || b<a){
      cout<<"NO";
   }else{
      reverse(path.begin(),path.end());
      cout<<"YES"<<"\n";
      cout<<count<<"\n";
      for(auto it:path)
         cout<<it<<" ";
   }
}