//remove duplicates from sorted array
#include<iostream>
using namespace std;

void remove_duplicates(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[i]){
                int temp = 0;
                temp = arr[i+1];
                arr[i+1] = arr[j];
                arr[j] = temp;
                break;
            }
        }
    }
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    remove_duplicates(arr, n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }

    return 0;
}