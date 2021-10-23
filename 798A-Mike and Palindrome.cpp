#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main(){
    string s;cin>>s;
    int count=0;
    for(int i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j])
            count++;
    }
    if(count==0 and s.size()%2==1){
        cout<<"YES";
    }else if(count==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}