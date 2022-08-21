# Linear Search

---
Given an array arr[] of N elements, the task is to write a function to search a given element x in arr[].

##### Function Code

```cpp
int LinearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
```
