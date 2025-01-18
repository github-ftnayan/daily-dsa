#include<bits/stdc++.h>
using namespace std;

char getFirstNonRepeatChar(string &s){
    vector<int> freq(26, 0);
    for(char ch : s)
        freq[ch - 'a']++;

    for(int i = 0; i < s.length(); i++)
        if(freq[s[i] -'a'] == 1)
            return s[i];
    
    return '$';
}

int main(){
    string s = "geeksforgeeks";
    char ans = getFirstNonRepeatChar(s);
    if(ans == '$')
        cout << -1;
    else 
        cout << ans;
    return 0;
}