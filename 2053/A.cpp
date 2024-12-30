#include <iostream>
using namespace std;

int main() {
    int t, n, _, i;
    int arr[200];
    bool result;

    cin >> t;

    for (_ = 0; _ < t; _++) {
        cin >> n;

        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Check if a stable set consisting of two adjacent elements exists.
        result = false;
        for (i = 0; i < n - 1; i++) {
            // The only two checks required, remaining inequalities are guaranteed to hold.
            if (arr[i] * 2 > arr[i + 1] && arr[i + 1] * 2 > arr[i]) {
                result = true;
                break;
            }
        }

        // There are at least two partitions iff there exists such a stable set.
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}