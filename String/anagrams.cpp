#include<bits/stdc++.h>
using namespace std;

bool areAnagrams(string &s1, string &s2){
    unordered_map<char, int> charCount;

    for(char ch : s1)
        charCount[ch]++;
    for(char ch : s2)
        charCount[ch]--;
    
    for(auto& pair : charCount){
        if(pair.second != 0)
            return false;
    }
    return true;
}

int main(){
    string s1 = "geeks";
    string s2 = "eekgs";
    cout << (areAnagrams(s1, s2) ? "true" : "false");
    return 0;
}