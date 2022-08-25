#include <iostream>
#include <vector>
using namespace std;

// LeetCode : 383
// https://leetcode.com/problems/ransom-note/

bool canConstruct(string ransomNote, string magazine)
{
    vector<int> hs(26, 0);

    for (int i = 0; i < magazine.length(); i++)
    {
        hs[magazine[i] - 'a'] += 1;
    }

    for (int i = 0; i < ransomNote.length(); i++)
    {
        if (hs[ransomNote[i] - 'a'] == 0)
        {
            return false;
        }
        hs[ransomNote[i] - 'a'] -= 1;
    }
    return true;
}

int main()
{
    string ransomNote = "aa";
    string magazine = "aab";
    cout << canConstruct(ransomNote, magazine);
}