#include<bits/stdc++.h>
using namespace std;

int getMaxProduct(vector<int> &arr){
    int n = arr.size(), leftToRight = 1, rightToLeft = 1, maxProduct = INT_MIN;

    for(int i = 0; i < n; i++){
        leftToRight = leftToRight == 0? 1 : leftToRight;
        rightToLeft = rightToLeft == 0? 1 : rightToLeft;

        leftToRight *= arr[i];

        int j = n - 1 - i;
        rightToLeft *= arr[j];

        maxProduct = max({maxProduct, leftToRight, rightToLeft}); 
    }
    return maxProduct;
}
int main(){
    vector<int> arr = {6, -3, -10, 0, 2};
    cout << getMaxProduct(arr);
    return 0;
}

