#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
  int temp = n;
  if(temp == 0){
    ans = 1;
  }else{
    while(temp>0){
temp =temp/10;
ans++;
    }
  }
   cout<<ans;
    return 0;
}