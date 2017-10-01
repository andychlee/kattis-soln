#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; ++i) {
        int length, ants;
        cin >> length >> ants;
        int min = 0;
        int max = 0;
        for (int j = 0; j < ants; ++j) {
            int ant_loc;
            cin >> ant_loc;
            int l_ant_loc = length - ant_loc;

            if (l_ant_loc < ant_loc) {
                if (min <= l_ant_loc) {
                    min = l_ant_loc;
                }
                if (max <= ant_loc) {
                    max = ant_loc;
                }
            } else {
                if (min <= ant_loc) {
                    min = ant_loc;
                }
                if (max <= l_ant_loc) {
                    max = l_ant_loc;
                }
            }

        }
        cout << min << " " << max << endl;
    }
}