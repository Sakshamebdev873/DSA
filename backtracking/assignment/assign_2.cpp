#include <iostream>
#include <vector>
#include <string>
using namespace std;

void combinations(int index, string ans, string digit, vector<string> mapping)
{
    // base case
    if (index == digit.size()) {
        cout << ans << endl;
        return;
    }

    // get the possible letters for current digit
    string letters = mapping[digit[index] - '2'];

    for (int i = 0; i < letters.size(); i++) {
        ans.push_back(letters[i]);                   // choose a letter
        combinations(index + 1, ans, digit, mapping); // move to next digit
        ans.pop_back();                              // backtrack
    }
}

int main()
{
    string digit;
    vector<string> mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    cout << "Enter the digit(2-9): ";
    cin >> digit;

    cout << "All possible combinations:\n";
    combinations(0, "", digit, mapping);

    return 0;
}
