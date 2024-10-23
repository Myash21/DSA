#include<iostream>
using namespace std;

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int max = arr[0];
    for (int i = 0; i < 6; i++){
        if (arr[i] > max) max = arr[i];
    }

    int max1 = arr[0];
    for (int i = 0; i < 6; i++){
        if (arr[i] > max1 && arr[i] < max) max1 = arr[i];
    }

    cout<<max1;
}