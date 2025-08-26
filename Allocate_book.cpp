#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // single book bigger than mid → not possible
        }

        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1; // not enough books for students

    int s = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = books.size();
    int m = 2; // Number of students

    int result = findPages(books, n, m);
    if (result != -1)
        cout << "Minimum number of pages: " << result << endl;
    else
        cout << "Not possible to allocate books." << endl;

    return 0;
}
