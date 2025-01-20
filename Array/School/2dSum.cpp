#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<int> &arr){
    int sum = 0;
    for(auto i : arr)
        sum += i;
    return sum;
}

int main(){
    vector<int> arr = { 1, 2, 3, 4, 5};
    cout<< getSum(arr);
    return 0;
}