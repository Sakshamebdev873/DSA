#include <iostream>
using namespace std;

int countSubstrings(string s, int i = 0) {
    if (i == s.size()) return 0;
    
    int count = 0;
    for (int j = i; j < s.size(); j++) {
        if (s[i] == s[j]) count++;  
    }

    return count + countSubstrings(s, i + 1); 
}

int main() {
    string s = "abcab";
    cout << countSubstrings(s);  
    return 0;
}
