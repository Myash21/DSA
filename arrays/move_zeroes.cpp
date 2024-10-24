#include<iostream>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
}

void move_zeroes(int arr[], int n){
    int j = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }
    for (int i = j+1; i < n; i++){
        if (arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j+=1;
        }
    }
}


int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    move_zeroes(arr, n);
    display(arr, n);
    return 0;
}