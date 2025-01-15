#include <bits/stdc++.h>
using namespace std;
void push0sToEnd(vector<int> &arr){
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0)
            swap(arr[i], arr[count++]);
    }
}

int main(){
    vector<int> arr = {0, 1, 2, 0, 12, 22, 122, 0, 45, 0, 3};
    push0sToEnd(arr);
    for(int elem: arr)
        cout << elem << " ";   
    
    return 0;
}