#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main(){
    int arr[] = {12, 78, 42, 36, 10};
    insertion_sort(arr, 5);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}