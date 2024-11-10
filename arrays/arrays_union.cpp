#include<iostream>
#include<set>

using namespace std;

set<int> unionOfArrays(int arr1[], int arr2[], int n, int m) {
    set<int> unionSet;

    // Insert elements from the first array into the set
    for (int i = 0; i < n; i++) {
        unionSet.insert(arr1[i]);
    }

    // Insert elements from the second array into the set
    for (int i = 0; i < m; i++) {
        unionSet.insert(arr2[i]);
    }

    return unionSet;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    set<int> unionSet = unionOfArrays(arr1, arr2, n, m);

    cout << "Union of the two arrays: ";
    for (int x : unionSet) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}