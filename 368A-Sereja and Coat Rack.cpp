#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int n,d,m;cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    sort(a,a+n);
    int count=0;
    if(m<=n){
        for(int i=0;i<m;i++)
            count+=a[i];
    }else{
        for(int i=0;i<n;i++)
            count+=a[i];
        count=count-(m-n)*d;
    }
    cout<<count;
}