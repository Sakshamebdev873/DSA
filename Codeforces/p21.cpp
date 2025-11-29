#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int y, r;
        cin >> y >> r;
        int count = 0;
       count = r;
        int ans = (y / 2);
        count +=ans;
        
        if(count>n){
            count=n;
        }
        
        cout << count << endl;
       
    }
    return 0;
}