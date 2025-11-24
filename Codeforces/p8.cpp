#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
string s;
cin>>s;
char s1 = toupper(s[0]);
s[0] = s1;
for(int i=0;i<s.size();i++){
    cout<<s[i];
}
    return 0;
}