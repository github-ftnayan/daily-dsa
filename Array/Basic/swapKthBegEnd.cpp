#include<vector>
#include<iostream>
using namespace std;

void swapKth(vector<int> &arr, int k){
    swap(arr[k - 1], arr[arr.size() - k]);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 2;
    swapKth(arr, k);
    for(auto a: arr)
        cout << a << " "; 
    return 0;
}