#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
bool compare(int a,int b)
{
    return a>b;
}
 
int main(){
   lli n,a,b;
   cin>>n>>a>>b;
   lli *arr=new long long int[n];
   lli sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum=sum+arr[i];
   }
   lli req=floor((arr[0]*a)/b);
   sort(arr+1,arr+n,compare);
   int count=0;
   if(req>=sum){
       cout<<"0";
   }else{
       for(int i=1;i<n;i++){
           sum-=arr[i];
           count++;
           if(req>=sum){
               break;
           }
       }
       cout<<count;
   }
}