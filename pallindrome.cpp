#include <bits/stdc++.h>
using namespace std;
int main(){
long long n = 1234;
vector<int> num;
int temp = n;
int ans = 0;
while (temp>0)
{
    ans = temp%10;
    num.push_back(ans);
    temp = temp/10;
}
bool check = false;
for(int i=0,j=num.size()-1;i<num.size(),j>0;i++,j--){
    if(num[i]!=num[j]){
        check = false;
        break;
    }else{
        check = true;
    }
}
if(check){
    cout<<"Pallindrome"<<endl;
}else{
    cout<<"Not a Pallindrome"<<endl;
}
    return 0;
}