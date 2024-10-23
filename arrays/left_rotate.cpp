#include<iostream>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
}

void left_rotate(int arr[], int n, int d){
    int temp[d] = {};
    for (int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }

    for (int i = n-d; i < n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

int main(){
    int arr[] = {1,2,3,4,5}; //{4,5,1,2,3}
    int n = sizeof(arr) / sizeof(arr[0]);
    left_rotate(arr, n, 3);
    display(arr, n);
    return 0;
}