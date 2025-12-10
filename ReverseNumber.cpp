#include <bits/stdc++.h>
using namespace std;
int main(){
long long n = 12345;
vector<int> num;
int temp = n;
int ans = 0;
while (temp>0)
{
ans = temp%10;
    num.push_back(ans);
    temp = temp/10;
}
for(int i=0;i<num.size();i++){
    cout<<num[i];
}
    return 0;
}