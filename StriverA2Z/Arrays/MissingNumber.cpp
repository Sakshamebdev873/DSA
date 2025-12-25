#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,4,5};
    int ans = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if ((arr[i] - arr[i - 1]) != 1)
        {

            ans = arr[i - 1];
            break;
        }
    }
    if(ans>0){
        cout << ans + 1 << endl;
    }else{
        cout <<"no missing number found"<< endl;
    }
    return 0;
}