#include<iostream>
using namespace std;

int getLenSubArr(int arr[], int n){
    int len = 1, max = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            len++;
        } else {
            if(max < len)
                max = len;
            len = 1;    
        }
    }
    if(max < len)
        max = len;
    return max;
}

int main(){
    int arr[] = {1, 1, 2 ,3, 4, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getLenSubArr(arr, n);
    return 0;
}