#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool hasDuplicates(const vector<int>& arr) {
    vector<int> seen(arr.size() + 1, 0);
    for (int num : arr) {
        if (seen[num] == 1) {
            return true; // Duplicate found
        }
        seen[num] = 1;
    }
    return false; // No duplicates
}

bool f(vector<int>& arr, int n) {
    if (hasDuplicates(arr)) {
        return false; // Permutations shouldn't have duplicates
    }

    while (true) {
        bool swapped = false;

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break; // No more swaps can be made
        }
    }

    return is_sorted(arr.begin(), arr.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << (f(arr, n) ? "YES" : "NO") << endl;
    }
    return 0;
}
