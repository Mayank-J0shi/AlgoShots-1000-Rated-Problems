#include<bits/stdc++.h>
using namespace std;
int main(){
 int numberOfdays;
 cin >> numberOfdays;
 int daysTemp[numberOfdays] = {0};
 for(int i=0;i<numberOfdays;i++){
    cin >> daysTemp[i];
  }
  bool isAp = true;                //it checks whether sequence is in AP or not.
  if(numberOfdays > 1){            //if number of days are greater than '1' then there will be some initial common difference.
     int common_diff = daysTemp[1] - daysTemp[0];
     for(int i = 2;i < numberOfdays;i++){
       if(common_diff != daysTemp[i] - daysTemp[i-1]){
          isAp = false;            //if sequence is not in AP.
          break;
       }
     }
     if(isAp){
        cout << daysTemp[numberOfdays-1] + common_diff << endl;
     }
     else{
        cout << daysTemp[numberOfdays-1] << endl;
     }
  }
  else{
    cout << daysTemp[0] << endl;
  }
 }