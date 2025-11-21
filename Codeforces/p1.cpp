#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1, n2, n3;
    int ans = 0;
    while (n > 0)
    {
        cin >> n1;
        cin>> n2;
        cin>> n3;
        if ((n1 == 1 && n2 == 1) || (n2 == 1 && n3 == 1) || (n1 == 1 && n3 == 1)){
            ans += 1;
        }
        n--;
    }
    cout<<ans<<endl;
    return 0;
}