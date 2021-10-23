#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
int main(){
   unsigned int n,a,b;cin>>n>>a>>b;
   if(n>a+b){
      cout<<b+1;
   }else if(a+b==n){
      cout<<b;
   }else{
      cout<<n-a;
   }
}