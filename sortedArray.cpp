#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 37, 4, 5};
    bool sorted = true;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            sorted = false;
        }
    }
    cout << sorted;
    return 0;
}