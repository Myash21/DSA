#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = n-1; i >= 1; i--){
        bool swap = false;
        for (int j = 0; j < i; j++){
            if (arr[j + 1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if (swap) break;
    }
}


int main(){
    int arr[] = {12, 78, 42, 36, 10};
    bubble_sort(arr, 5);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}