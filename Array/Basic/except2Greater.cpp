#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findElements(vector<int> &arr) {
    // Your code goes here
    sort(arr.begin(), arr.end());
    vector<int> res;
    for(int i = 0; i < arr.size() - 2; i++)
        res.push_back(arr[i]);
    return res;
}

int main(){
    vector<int> arr = {7,4,3,13,5};
    vector<int> res = findElements(arr);
    for(auto r: res)
        cout << r << " ";

    return 0;
}