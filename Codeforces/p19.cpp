#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);

        // input and convert -1 → 0
        for (int i = 0; i < n; i++) {
            cin >> v[i];
           
        }

       if(v[0] == -1 && v[n-1] == -1){
        v[0]=0;
        v[n-1]=0;

       }else if(v[0] == -1){
        v[0] = v[n-1];
       }else if(v[n-1] == -1){
        v[n-1] = v[0];
       }
       cout << abs(v[0] - v[n-1])<<endl;
        for (int x : v) {
            if(x == -1) x= 0;
            cout << x << " ";
        }
        cout << endl;

      
    }

    return 0;
}
