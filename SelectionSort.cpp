#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int n){
    int indexOfMin = 0;
    for(int i=0;i<n;i++){
        indexOfMin  = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        swap(arr[i],arr[indexOfMin]);
    }
}
int main(){
    int arr[] = {2,1,34,53,21,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    // before
    print(arr,size);
    selectionSort(arr,size);
    print(arr,size);
    return 0;
}