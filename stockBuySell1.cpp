#include<bits/stdc++.h>
using namespace std;

int returnMostProfit(vector<int> &arr){
    int minSoFar = arr[0], res = 0;
    for(int i = 0; i < arr.size(); i++){
        minSoFar = min(arr[i], minSoFar);

        res = max(res, arr[i] - minSoFar);
    }
    return res;
}
int main(){
    vector<int> arr = {7, 10, 1, 3, 6, 9, 2};
    cout << returnMostProfit(arr);
    return 0;
}