#include<bits/stdc++.h>
using namespace std;
int main(){
   int lectureWords,noTranslations;
   cin>>lectureWords>>noTranslations;
   map <string , string > mp;
   for(int i=0;i<noTranslations;i++){
      string s,s1;
      cin>>s;
      cin>>s1;
      mp[s]=s1;
   }
   cin.get();
   string notes;
   getline(cin,notes);
   string ans,temp;
   int i=0;
   while(i<notes.length()){
      if(notes[i]==' '){
         int l1=temp.length();
         int l2=mp[temp].length();
         if(l1<=l2){
            ans+=temp;
         }else{
            ans+=mp[temp];
         }
         ans+=' ';
         temp.clear();
      }else{
         temp+=notes[i];
      }
      i++;
   }
   int l1=temp.length();
   int l2=mp[temp].length();
   if(l1<=l2){
      ans+=temp;
   }else{
      ans+=mp[temp];
   }
   cout<<ans;
}