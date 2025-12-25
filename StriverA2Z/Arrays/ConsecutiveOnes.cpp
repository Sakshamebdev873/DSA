#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1};
    int ans = 1;
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i - 1] == 1 && arr[i] == 1)
        {
            ans += 1;
            temp = ans;
        }else{
            ans = 1;
        }
    }
    ans = temp;
if(ans == 1){
    cout<<"No consecutive 1 founds";
}else{
    cout<<ans;
}
    return 0;
}