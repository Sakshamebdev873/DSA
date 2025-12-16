#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BubbleSort(int arr[],int n){
if( n == 1 ){
    return;
}
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
   BubbleSort(arr,n-1);
}
int main(){
    int arr[] = {2,1,34,53,21,32};
    int size = sizeof(arr)/sizeof(arr[0]);
// Before
print(arr,size);
BubbleSort(arr,size);
// after
print(arr,size);
    return 0;
}