#include <iostream>
#include <vector>
using namespace std;

// LeetCode : 383
// https://leetcode.com/problems/ransom-note/

bool canConstruct(string ransomNote, string magazine)
{
    vector<int> hs(26, 0);

    for (char i : magazine)
    {
        hs[i - 'a'] += 1;
    }

    for (char i : ransomNote)
    {
        if (hs[i - 'a'] == 0)
        {
            return false;
        }
        hs[i - 'a'] -= 1;
    }
    return true;
}

int main()
{
    string ransomNote = "aa";
    string magazine = "aab";
    cout << canConstruct(ransomNote, magazine);
}