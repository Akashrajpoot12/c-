#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1; 
    int mid = start + (end - start) / 2;
    while (start < end) {
        if (arr[mid] < arr[end]) {
            start = mid + 1; // Move to the right side
        }
        else {
            end = mid; // Move to the left side
        }
        mid = start + (end - start) / 2; // Recalculate mid
    }
    return start; // The pivot index is where the array is rotated
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    cout << "Pivot index is: " << findPivotIndex(arr, 5) << endl;
    return 0;
}