# Leaders In An Array

---
Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

##### Example

> **Input:**
&nbsp; n = 6
&nbsp;    A[] = {16,17,4,3,5,2}
**Output:** 17 5 2
Explanation: The first leader is 17 as it is greater than all the elements to its right.  Similarly, the next leader is 5. The right most element is always a leader so it is also included.

```cpp
vector<int> leaders(int arr[], int n) {

    vector<int> result;

    int right_max = arr[n - 1];
    result.push_back(right_max);
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= right_max) {
            right_max = arr[i];
            result.push_back(right_max); 
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

```
