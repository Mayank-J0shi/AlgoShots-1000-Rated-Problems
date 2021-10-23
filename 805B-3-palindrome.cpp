#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main(){
    int n;cin>>n;
    string s;bool flag=true;
    for(int i=1;i<=n;i++){
        if(i%4==0)  flag=true;
        if(i%4==2)  flag=false;
        if(flag){
            s.push_back('a');
        }else{
            s.push_back('b');
        }
    }
    cout<<s;
}