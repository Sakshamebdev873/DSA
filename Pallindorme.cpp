#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    vector<int> a;
    while (temp > 0)
    {
        temp = temp % 10;
        a.push_back(temp);
    }
    
    return 0;
}