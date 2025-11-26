#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    int steps = n/5;
    if(n%5 != 0) steps++;
    cout<<steps;
    return 0;
}