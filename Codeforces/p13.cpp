#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper = 0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            upper++;
        }
    }
    int mid = (s.size()/2);
    for(int i=0;i<s.size();i++){
        if(upper > mid ){
            s[i] = toupper(s[i]);
        }else{
            s[i] = tolower(s[i]);
        }

    }
    cout<<s;
    return 0;
}