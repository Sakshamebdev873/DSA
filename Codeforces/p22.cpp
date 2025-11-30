#include <bits/stdc++.h>
using namespace std;
int main()
{
    // a se jyada nhi hona chahiye chaiye n or b ka multiple b hai difference tumhara

    int t;
    cin >> t;
    while (t--)
    {
        int moves = 0;
        long long a, b, n;
        cin>> a >> b >> n;

        if ((n * b) <= a  || b >= a)
        {
            moves = 1;
        }
        
        else
        {
            moves = 2;
        }
        cout << moves << endl;
    }

    return 0;
}