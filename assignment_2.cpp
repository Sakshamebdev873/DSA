#include <iostream>
#include <string>
#include <vector>
using namespace std;
void allsubstringOcurr(string str,int i,int z,vector<string> ans){
if (i==z){
    cout<<str[i]<<endl;
    ans.push_back(str[i]);
}
int j =z;
if(z==str.size()-1){

    allsubstringOcurr(str,i+1,z,ans)
}
}
int main()
{
    string s = "abcab";
    allsubstringOcurr(s, 0, 1);
    return 0;
}