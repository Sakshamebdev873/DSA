#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int h;
    int fh;
    cin>>n>>h;
    vector<int> height_friends;
    while (n--)
    {
        cin >> fh;
        height_friends.push_back(fh);
    }
    int width_road = 0;
    for (int i = 0; i < height_friends.size(); i++)
    {
        if (height_friends[i] <= h)
        {
            width_road++;
        }
        else
        {
            width_road += 2;
        }
    }
    cout<<width_road<<endl;
    return 0;
}