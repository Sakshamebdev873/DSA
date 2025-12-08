#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n;
        cin>>x;
        vector<int>num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        int ans = num[0];
        for(int i = 1;i<num.size();i++){
            ans = max(ans,num[i]-num[i-1]);
        }
        ans = max(ans,x - num[n-1]);
        ans = max(ans,2*(x-num[n-1]));
        cout<<ans<<endl;
    }
    
    return 0;
}