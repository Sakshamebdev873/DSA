#include <iostream>
using namespace std;
void major(int arr[],int n){
int freq[100] = {};
for(int i=0;i<n;i++){
    freq[arr[i]]++;
    // cout<<freq[arr[i]]<<endl;
}
for(int j=0;j<100;j++){
    if(freq[j]>(n/2)){
        cout<<j<<endl;
        break;
    }
}
}
int main(){
int nums[] = {2,2,1,1,1,2,2};
int size = sizeof(nums)/sizeof(nums[0]);
major(nums,size);
    return 0;
}