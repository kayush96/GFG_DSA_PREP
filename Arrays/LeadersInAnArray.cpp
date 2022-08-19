#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = leaders(arr, n);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
} 