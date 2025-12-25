#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr =  {4,1,2,1,2};
    int freq[100] ={0};
for(int i=0;i<arr.size();i++){
    freq[arr[i]]++;
}
for(int i=0;i<100;i++){
    if(freq[i]==1){
        cout<<i<<endl;
    }
}
    return 0;
}