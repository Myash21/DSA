#include<iostream>
using namespace std;

void sel_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


int main(){
    int arr[] = {12, 78, 42, 36, 10};
    sel_sort(arr, 5);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}