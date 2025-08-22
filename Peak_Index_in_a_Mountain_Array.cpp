#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {
    vector<int> arr = {0, 2, 5, 3, 1};
    int peak = peakIndexInMountainArray(arr);
    cout << "Peak index is: " << peak << endl;
    return 0;
}