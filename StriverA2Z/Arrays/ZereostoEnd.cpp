#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
  vector<int> temp(arr.size(), 0);

    int idx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            temp[idx] = arr[i];
            idx++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = temp[i];
    }
    // printing the arrray
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}