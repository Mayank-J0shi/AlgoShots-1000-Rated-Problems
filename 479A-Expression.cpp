#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main(){
    int a,b,c;cin>>a>>b>>c;
    int res1=a+b*c;
    int res2=a*(b+c);
    int res3=a*b*c;
    int res4=(a+b)*c;
    int res5=a+b+c;
    cout<<max(max(max(res1,res2),max(res3,res4)),res5);
}