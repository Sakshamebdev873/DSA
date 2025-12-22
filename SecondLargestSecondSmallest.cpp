#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 4, 7, 7, 5};
sort(arr.begin(),arr.end());
int secondLargest = arr[arr.size()-2];
int secondSmallest = arr[1];
cout<<secondLargest<<" "<<secondSmallest<<endl;
    return 0;
}