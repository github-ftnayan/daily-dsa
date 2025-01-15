#include<bits/stdc++.h>
using namespace std;

int circularSubarraySum(vector<int> &arr){
    int totalSum = 0, currMax = 0, currMin = 0, maxSum = arr[0], minSum = arr[0];

    for(int i = 0; i < arr.size(); i++){
        currMax = max(currMax + arr[i], arr[i]);
        maxSum = max(maxSum, currMax);

        currMin = min(currMin + arr[i], arr[i]);
        minSum = min(minSum, currMin);

        totalSum += arr[i];
    }

    int circularSum = totalSum - minSum;

    if(minSum == totalSum) return maxSum;

    return max(circularSum, maxSum);
}

int main(){
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    cout << circularSubarraySum(arr);
    return 0;
}