#include <iostream>
using namespace std;
int main()
{
    // when will limark(A) will become heavier than bob(b) in how many years

    int a;
    int b;
    cin>>a>>b;
    int i = 0;

    for(int j=0;j<10000;j++){
        a = a*3;
        b= b*2;
        i++;
        if(a>b){
            break;
        }

    }
    cout << i << endl;
    return 0;
}