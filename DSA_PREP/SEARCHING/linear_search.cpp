#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int index = LinearSearch(arr, n, key);
    if(index == -1) {
        cout << "Not Found!" << endl;
    } else {
        cout << "Element Found at index : " << index << endl;
    }
    return 0;
} 