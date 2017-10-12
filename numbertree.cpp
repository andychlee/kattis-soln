#include <iostream>

using namespace std;

int main() {
    int depth;
    string s;
    cin >> depth >> s;

    int counter = 1;
    for (auto c: s) {
        counter *= 2;
        if (c == 'R') {
            counter += 1;
        }
    }

    int max = 1 << (depth + 1);
    cout << max - counter;

}