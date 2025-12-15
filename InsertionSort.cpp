#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
int arr[] = {2,1,34,53,21,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    // before
    print(arr,size);
    InsertionSort(arr,size);
    // after
    print(arr,size);
    return 0;
}