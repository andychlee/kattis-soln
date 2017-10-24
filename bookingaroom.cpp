#include <iostream>

using namespace std;

int main() {
    long r, n;
    cin >> r >> n;
    if (n == r) {
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
        }
        cout << "too late" << endl;
    } else {
        bool arr[r+1];
        for (int l = 1; l < r+1; ++l) {
            arr[l] = true;
        }
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            arr[num] = false;
        }
        for (int j = 1; j < r+1; ++j) {
            if (arr[j] == true) {
                cout << j << endl;
                break;
            }
        }

    }
}