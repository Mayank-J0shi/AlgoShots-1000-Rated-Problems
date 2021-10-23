#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main(){
    string s;
    cin>>s;
    lli p=s.length();
    if(p%2==0){
        cout<<p/2;
    }else{
        int count1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count1++;
            }
        }
        if(count1>1){
            cout<<p/2+1;
        }else{
            cout<<p/2;
        }
    }
}