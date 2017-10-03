#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<char> word;
    string s;
    cin >> s;
    for (char i : s) {

        if (i == '<') {
            if (!word.empty()) {
                word.pop_front();
            }
        } else {
            word.push_front(i);
        }
    }

    while (!word.empty()) {
        cout << word.back();
        word.pop_back();
    }
}