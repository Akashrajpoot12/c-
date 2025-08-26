#include <vector>
#include <iostream> // Include the iostream library for printing
using namespace std;

class Solution {
public: 
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) { // Check if the array has one or zero elements
            return; // If so, it is already sorted
        }
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

int main() {
    Solution solution;
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    solution.insertionSort(arr);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}   