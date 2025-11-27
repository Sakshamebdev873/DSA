#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
string s;
cin>>s;
    int countA = 0;
    int countD = 0;
    int i=0;
    while (n--)
    {
        if(s[i] == 'A' ){
            countA++;
        }else{
            countD++;
        }
        i++;
    }
    if(countA == countD){
        cout<<"Friendship";
    }else if(countA>countD){
        cout<<"Anton";
    }else{
        cout<<"Danik";
    }
    return 0;
}