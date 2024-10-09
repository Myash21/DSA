#include<iostream>
using namespace std;

void displayNto1(int n){  //display nos from n to 1
    if (n < 1) return;
    cout<<n<<", ";
    displayNto1(n-1);
}

void display1toN(int n){  //display nos from 1 to n
    if (n < 1) return;
    display1toN(n-1);
    cout<<n<<", ";
}

int sum(int n){           // display sum of first n numbers
    if (n < 1) return 0;
    return n + sum(n-1);
}

int fact(int n){          //display factorial of n
    if (n < 1) return 1;
    return n * fact(n-1);
}

void reversearr(int arr[], int l, int r) {   //reverse an array
    if (l >= r) return;
    std::swap(arr[l], arr[r]);
    reversearr(arr, l + 1, r - 1);
}


int main(){
    //displayNto1(5);
    //display1toN(5);
    //cout<<sum(5);
    //cout<<fact(3);
    int arr[] = {1,2,3,4,5};
    reversearr(arr, 0, 4);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}