#include<bits/stdc++.h>
using namespace std;

int getMaxSubArrSum(vector<int> &arr){
    int maxSum = arr[0], res = arr[0], n = arr.size();
    for(int i = 1; i < n; i++){
        maxSum = max(maxSum + arr[i], arr[i]);

        res = max(res, maxSum);
    }
    return res;
}

int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << getMaxSubArrSum(arr);
}