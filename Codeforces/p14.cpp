#include <iostream>
#include <string>
using namespace std;
int main(){
    // n number will be operated k times
    // n=512 and k=4
    int n;
    cin>>n;
    // k times
    int k;
    cin>>k;
    while (k--)
    {
        if(n%10 !=0){
            n = n-1;
        }else{
            n = n/10;
        }
    }
    cout<<n;
    return 0;
}