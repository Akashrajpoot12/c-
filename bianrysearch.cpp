#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1; // Initialize answer to -1

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {

            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans; // Return the first occurrence index
}
int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1; // Initialize answer to -1
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // Move to the right side to find the last occurrence
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans; // Return the last occurrence index
}

int main()
{
    int even[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << "Index of first occurrence of 12 in even array: " << firstOccurrence(even, 10, 12) << endl;

    cout << "Index of last occurrence of 12 in even array: " << lastOccurrence(even, 10, 2) << endl;

    int odd[11] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    cout << "Index of first occurrence of 11 in odd array: " << firstOccurrence(odd, 11, 11) << endl;
    return 0;
}