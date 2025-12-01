#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        string s;
        cin >> n >> x >> y >> s;
           long long a = 0, b = 0;
           x=llabs(x);
           y=llabs(y);
        for (char c : s) {
            if (c == '4') a++;
            else b++;
        }
        bool ok = true;
                                                                                                                                        
        if (a + 2*b < x + y) ok = false;
        if (a + b < max(x, y)) ok = false;

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}