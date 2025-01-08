#include<bits/stdc++.h>
using namespace std;

int returnMaxProfit(vector<int> &arr){
    int maxProfit = 0;
    for(int i = 1; i < arr.size(); i++)
        if(arr[i] > arr[i - 1])
            maxProfit += arr[i] - arr[i - 1];
    return maxProfit;
}
int main(){
    vector<int> arr = {100, 180, 260, 310, 40, 535, 695};
    cout << returnMaxProfit(arr);
    return 0;
}