#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
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
    int index = BinarySearch(arr, n, key);
    if(index == -1) {
        cout << "Not Found!" << endl;
    } else {
        cout << "Element Found at index : " << index << endl;
    }
    return 0;
} 