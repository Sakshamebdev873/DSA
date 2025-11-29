#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int n,a;
    cin>>n>>a;
    vector <int> num(n);
    int l=0,r=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]>a) l++;
        if(num[i]<a) r++; 
    }
     int ans = (l>r) ? a+1:a-1;
     cout<<ans<<endl;
}

return 0;
}