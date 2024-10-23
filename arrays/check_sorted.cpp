#include<iostream>
using namespace std;


void check_sorted(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        if (arr[i+1] < arr[i]){
            cout<<"not sorted";
            return;
        }
    }
    cout<<"sorted";
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    check_sorted(arr, n);
    
    return 0;
}