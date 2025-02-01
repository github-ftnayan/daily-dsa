#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> getLeaders(vector<int> &arr){
    int size = arr.size();
    vector<int> res;
    int maxRight = arr[size - 1];
    res.push_back(maxRight);

    for(int i = size - 2; i >= 0; i--){
        if(arr[i] >= maxRight){
            maxRight = arr[i];
            res.push_back(arr[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> res = getLeaders(arr);

    for(auto& r: res)
        cout<< r << " ";
    return 0;
}