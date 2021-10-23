#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
   ll number;cin >> number;
   if(number==1){
      cout<<"0"<<"\n";
   }else{
      ll start=8;
      ll total=0;
      for(int  i=1;i<=number/2;i++,start+=8){
         total+=start*i;
      }
      cout<<total<<"\n";
   }
}
 
int main(){
   ll t;cin >> t;
   while (t--)
   {
      solve();
   }
      
}