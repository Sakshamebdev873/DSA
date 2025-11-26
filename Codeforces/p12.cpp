#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int w;
    cin>>w;
    int total = 0;
    int i = 1;
    while (w--)
    {
    total = total + n * i;
    i++;
    }
   int ans = total - k;
   if(ans<0){
    ans=0;
    
   }
   cout<<ans;

    return 0;
}