#include <iostream>

using namespace std;

int main() {
    int n_1, n_2, temp, dist;
    cin >> n_1 >> n_2;

    if (n_1 > n_2) {
        temp = n_1 - n_2;
        if (temp >= 180) {
            cout << 360 - temp;
        } else {
            cout << "-" << temp;
        }
    } else {
        temp = n_2 - n_1;
        if (temp > 180) {
            cout << "-" << 360 - temp;
        } else {
            cout << temp;
        }
    }

}