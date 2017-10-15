#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases, n, counter;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        counter = 0;
        string out;
        cin >> n;
        bool arr[n+1];

        for (int l = 0; l < n+1; ++l) {
            arr[l] = true;
        }

        for (int j = 2; j*j < n; ++j) {
            if (arr[j] == true) {
                for (int k = j*2; k <= n; k += j) {
                    arr[k] = false;
                }
            }
        }

        for (int p = 2; p <= n / 2; p++) {
            if (arr[p] && arr[(n-p)]) {
                counter += 1;
                out += to_string(p);
                out += "+";
                out += to_string(n-p);
                out += "\n";
            }
        }

        cout << n << " has " << counter << " representation(s)" << endl;
        cout << out << endl;
    }
}