#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b){
    unordered_set<int> hashSet(a.begin(), a.end());

    for(int n : b)
        if(hashSet.find(n) == hashSet.end())
            return false;
        
    return true;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 1};
    
    if (isSubset(a, b))
        cout << "true" << endl;
    else
        cout << "false" << endl;
        
    return 0;
}