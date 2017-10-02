#include <iostream>
#include <queue>

using namespace std;

int main() {
    while (true) {
        int n, m;
        int num;
        cin >> n >> m;
        int counter = 0;
        bool flag = true;
        if (n == 0 && m == 0) {
            break;
        } else if (n > m) {
            for (int i = 0; i < n; ++i) {
                cin >> num;
            }

            for (int j = 0; j < m; ++j) {
                cin >> num;
            }
            cout << "Loowater is doomed!\n";
        } else {
            priority_queue<int, vector<int>, greater<int>> heads;
            priority_queue<int, vector<int>, greater<int>> knights;
            for (int i = 0; i < n; ++i) {
                cin >> num;
                heads.push(num);
            }

            for (int j = 0; j < m; ++j) {
                cin >> num;
                knights.push(num);
            }

            while (!heads.empty()) {
                if (knights.empty()) {
                    flag = false;
                    break;
                } else {
                    if (knights.top() >= heads.top()) {
                        heads.pop();
                        counter += knights.top();
                        knights.pop();
                    } else {
                        knights.pop();
                    }

                }
            }
            if (flag) {
                cout << counter << "\n";
            } else {
                cout << "Loowater is doomed!\n";
            }
        }
    }
}