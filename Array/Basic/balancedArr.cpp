#include<vector>
#include<iostream>
using namespace std;

int getBalancedArr(vector<int> &arr){
    int sum1 = 0, sum2 = 0, n = arr.size();
    for(int i = 0; i < n; i++){
        if(i < n/2)
            sum1 += arr[i];
        else 
            sum2 += arr[i];
    }
    return abs(sum1 - sum2);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << getBalancedArr(arr);
    return 0;
}