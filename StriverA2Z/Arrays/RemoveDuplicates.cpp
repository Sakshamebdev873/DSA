#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,1,2,2,2,3,3};
    vector<int> Single;
    int freq[1000] = {0};
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(freq[i]>0){
            cout<<i<<endl;
        }
    }
    return 0;
}