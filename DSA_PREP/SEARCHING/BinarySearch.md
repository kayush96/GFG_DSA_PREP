# Binary Search

---
Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array.

```cpp
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
```