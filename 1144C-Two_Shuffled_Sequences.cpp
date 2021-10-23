#include<bits/stdc++.h>
using namespace std;
int main(){
 int numberOfElements;
 cin>>numberOfElements;
 vector<int> increasing;
 vector<int> decreasing;
 unordered_map <int,int> mp;
 bool possible = true;
 for(int i = 0;i < numberOfElements;i++){
    int val;
    cin >> val;
    mp[val]++;          
    if(mp[val] > 2){
      possible = false; 
    }
    if(mp[val] == 1){
      increasing.push_back(val); 
    }
  }
 for(auto it = mp.begin();it != mp.end();it++){
    if(it->second == 2){
        decreasing.push_back(it->first); 
    }
 }
 if(!possible){
    cout << "NO" << endl;
 }
 else{
    cout << "YES" << endl;
    cout << increasing.size() << endl;
 
    sort(increasing.begin(),increasing.end()); 
 
    for(auto it = increasing.begin();it != increasing.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << decreasing.size() << endl;
 
    sort(decreasing.begin(),decreasing.end(),greater<int>()); 
 
    for(auto it = decreasing.begin();it != decreasing.end();it++){
        cout << *it << " ";
    }
 }
 
}