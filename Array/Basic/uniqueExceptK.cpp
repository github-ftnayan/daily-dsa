#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int getUniqueExceptK(vector<int> &arr, int k){
    unordered_map<int, int> freqMap;
    int n = arr.size();
    for(int i = 0; i < n; i++)
        freqMap[arr[i]]++;

    for(const auto& entry : freqMap)
        if(entry.second != k)
            return entry.first;
    
    return -1;
}

int main(){
    vector<int> arr = {6, 2, 5, 2, 2, 6, 6};

    cout << getUniqueExceptK(arr, 3);
    return 0;
}