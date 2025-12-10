#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int dotCount = 0;
        int maxSeg = 0;
        int cnt = 0;

        for (char c : s) {
            if (c == '.') {
                cnt++;
                dotCount++;
            } else {
                maxSeg = max(maxSeg, cnt);
                cnt = 0;
            }
        }
        maxSeg = max(maxSeg, cnt);

        if (maxSeg >= 3) cout << 2 << "\n";
        else cout << dotCount << "\n";
    }
    return 0;
}
