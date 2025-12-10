#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
   for(int i=0;i<n;i++){
    n =  n/10;
    ans +=1;
    if(n == 0){
        break;
    }
   }
   cout<<ans;
    return 0;
}