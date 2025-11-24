#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
string s;
cin>>s;
vector <char>num;
for(int i=0;i<s.size();i++){
if( s[i] != '+'){
num.push_back(s[i]);
}
}
sort(num.begin(),num.end());
for(int i=0;i<num.size();i++){
    cout<<num[i];
    if(i != num.size() -1 ){
        cout<<"+";
    }
}
    return 0;
}