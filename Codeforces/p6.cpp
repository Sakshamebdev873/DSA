#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int val = (unsigned char)s[i];
        freq[val] = 1;
    }
    int size = sizeof(freq) / sizeof(freq[0]);
    int distinct = 0;
    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
           distinct++;
        }
        
    }
if(distinct % 2 == 1){
    cout<<"IGNORE HIM!";
}else{
    cout<<"CHAT WITH HER!";
}
    return 0;
}