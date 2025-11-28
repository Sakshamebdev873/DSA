#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string s1;
    cin >> s >> s1;
    bool isTrue = false;

    for (int i = 0, j = s1.size() - 1; i < s.size() && j >= 0; i++, j--)
    {
        if (s.size() != s1.size())
        {
            isTrue = false;
            break;
        }
        if (s[i] != s1[j])
        {
            isTrue = false;
            break;
        }
        else
        {
            isTrue = true;
        }
    }
    if (isTrue)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}