#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
int main(){
   ll n,k;cin>>n>>k;
   ull arr[k];
   ull temp;
   ull hamsterRem=LONG_LONG_MAX;
   ull type,count;
   for(ull i =0;i<k;i++){
      cin>>temp;
      if(hamsterRem>n%temp){
         hamsterRem=n%temp;
         type=i+1;
         count=n/temp;
      }
   }
   cout<<type<<" "<<count;
}