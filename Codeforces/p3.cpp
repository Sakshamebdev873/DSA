#include <iostream>
using namespace std;


int beautiful(int arr[][5],int i,int j){
   
}
int main()
{
    int arr[][5] = {0};
// input of loop
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
// now making it beautiful
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(arr[i][j] == 1){
            beautiful(arr,i,j);
            return;
        }
    }
}
    return 0;
}