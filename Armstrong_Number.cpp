#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> b;
    int temp = n;
    while (temp > 0)
    {
        b.push_back(temp % 10);
        temp = temp / 10;
    }
    int ans = 0;
    for (int i = 0; i < b.size(); i++) {
        ans += pow(b[i], b.size());
    }
    if (ans == n)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}