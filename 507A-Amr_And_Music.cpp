#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,days;
   cin>>n>>days;
   pair<int, int> pm[n];
   for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      pm[i].first=temp;
      pm[i].second=i+1;
   }
   sort(pm,pm+n);
   int count=0;vector <int> index;
   for(int i=0;i<n;i++){
      if(pm[i].first<=days){
         days-=pm[i].first;
         count++;
         index.push_back(pm[i].second);
      }else{
         break;
      }
   }
   cout<<count<<"\n";
   for(auto it: index){
      cout<<it<<" ";
   }
}