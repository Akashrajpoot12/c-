#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {              // Passes
        for (int j = 0; j < n - i; j++) {      // Comparisons
            if (arr[j] > arr[j + 1]) {         // Correct comparison
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
