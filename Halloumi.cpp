#include <iostream>
#include <vector>
using namespace std;

bool f(vector<int>& arr, int n) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i + 1] < arr[i] && n == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        cout << (f(arr, k) ? "Yes" : "No") << endl;
    }
    return 0;
}
