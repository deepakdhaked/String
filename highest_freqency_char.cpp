#include<iostream>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    string str = "aaaddbcjfduregvvcud";
    unordered_map<char, int> mp;

    for(char i: str){
        mp[i]++;
    }

    int max = INT_MIN;
    for (auto i : mp)
    {
        if (max<i.second)
        {
            max = i.second;
        }
    }
    cout << max;
}