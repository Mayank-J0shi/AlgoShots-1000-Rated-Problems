#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int isVowel(char x){
    if (x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u')
        return 1;
    else
       return -1;
}
 
int main(){
    string s,t;cin>>s>>t;
    bool flag=true;
    if(s.length()!=t.length()){
        cout<<"No";
    }else{
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])!=isVowel(t[i])) flag=false;
        }
        if(flag){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
}