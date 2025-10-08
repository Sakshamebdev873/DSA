#include <iostream>
using namespace std;

int countSubstrings(string s, int i = 0) {
    if (i == s.size()) return 0;  // base case
    
    int count = 0;
    for (int j = i; j < s.size(); j++) {
        if (s[i] == s[j]) count++;  // substring starts & ends same
    }

    return count + countSubstrings(s, i + 1);  // move to next start index
}

int main() {
    string s = "abcab";
    cout << countSubstrings(s);  // Output: 7
    return 0;
}
