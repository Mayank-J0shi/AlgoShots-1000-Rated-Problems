#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
   int a,b;cin>>a>>b;
   int hours=a;int n=a;
   while(n>=b){
      hours+=n/b;
      n=n/b+n%b;
   }
   cout<<hours;
}