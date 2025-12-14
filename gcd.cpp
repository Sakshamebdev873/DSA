#include <bits/stdc++.h>
using namespace std;
int main(){
    int n= 3,n1 = 15;
    vector<int>gcd;
    vector<int>gcd_1;
    vector<int>common;
    for(int i=1;i<=n;i++){
        if(n%i ==0){
            gcd.push_back(i);
        }
    }
    for(int i=1;i<=n1;i++){
        if(n1%i ==0){
            gcd_1.push_back(i);
        }
    }
    for(int i=0;i<gcd.size();i++){
        if(gcd[i] == gcd_1[i]){
            common.push_back(gcd[i]);
        }
    }
    for(int i=0;i<common.size();i++){
        cout<<common[i] <<endl;
    }
    return 0;
}