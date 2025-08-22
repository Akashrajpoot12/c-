#include<iostream>
using namespace std;

class Solution {
public:
    long long int binarySearch(int n) {
        int s = 0;
        int e = n;
        long long int ans = -1;

        while (s <= e) {
            long long int mid = s + (e - s) / 2;
            long long int square = mid * mid;

            if (square == n) {
                return mid;  // Perfect square found
            }

            if (square < n) {
                ans = mid;   // Possible answer
                s = mid + 1; // Move right
            } else {
                e = mid - 1; // Move left
            }
        }

        return ans; // Floor of sqrt
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};

double morePrecison(int n, int precision, long long int tempSol) {
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < precision; i++) {
        factor /= 10;
        for (double j = ans; j * j <= n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    Solution sol;
    int x, precision;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter precision (number of decimal places): ";
    cin >> precision;
    long long int tempSol = sol.mySqrt(x);
    double preciseSqrt = morePrecison(x, precision, tempSol);
    cout << "Square root (floor) of " << x << " is: " << tempSol << endl;
    cout << "Square root of " << x << " with precision is: " << preciseSqrt << endl;
    return 0;
}
