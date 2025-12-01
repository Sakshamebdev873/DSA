#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int missing = 0;
        for (int i = 0; i < k; i++) {
            if (freq[i] == 0) missing++;
        }

        int countK = freq[k];

        cout << max(missing, countK) << "\n";
    }

    return 0;
}
