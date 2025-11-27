#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int cnt=0;
    while(n > 0) {
        int digit =int(n % 10LL);
        if(digit == 4 || digit == 7) {
            cnt++;
        }else{
            
        }
        n = n / 10LL;
    }
    if(cnt == 7 || cnt == 4)
    cout << "YES" <<endl;
    else cout << "NO" <<endl;

 
    return 0;
}
