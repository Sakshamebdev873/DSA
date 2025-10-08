#include <iostream>
using namespace std;
int step = 1;
void towerofHanoi(int n,char fromRod, char auxRod,char toRod){
    if(n==1){
        cout<<"Step " << step++ << " : Shift disk 1 from " << fromRod << " to " << toRod << "." << endl;
        return;
    }
    towerofHanoi(n-1,fromRod,toRod,auxRod);
    cout << "Step " << step++ << " : Shift disk " << n << " from " << fromRod << " to " << toRod << "." << endl;
    towerofHanoi(n - 1, auxRod, fromRod, toRod);
}
int main(){
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    towerofHanoi(n, 'A', 'B', 'C');
    return 0;
}