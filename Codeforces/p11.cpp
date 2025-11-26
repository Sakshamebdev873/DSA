#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<char> st;
    while (n--)
    {
        char s;
        cin >> s;
        st.push_back(s);
    }
    int ans = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if(st[i]==st[i+1]){
           ans++;
        }
        if((i+1)==(st.size()-1)){
            break;
        }
    }
    cout<<ans;
    return 0;
}