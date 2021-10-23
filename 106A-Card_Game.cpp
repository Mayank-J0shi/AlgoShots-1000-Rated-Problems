#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	char trump;cin>>trump;
	string s1,s2;cin>>s1>>s2;
	string ranks = "6789TJQKA";
	if(s1[1]==s2[1]){
		if(ranks.find(s1[0])>ranks.find(s2[0]))
			cout<<"YES";
		else
			cout<<"NO";
	}else{
		if(s1[1]==trump){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
}