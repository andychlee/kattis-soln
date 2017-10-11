#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    char board[rows][cols];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            char a;
            cin >> a;
            board[i][j] = a;
        }
    }

    int x = 0;
    int y = 0;
    int counter = 0;

    while (true) {

        if (board[y][x] == 'L') {
            cout << "Lost" << endl;
            break;
        } else if (board[y][x] == 'E') {
            board[y][x] = 'L';
            x += 1;
            counter += 1;
        } else if (board[y][x] == 'W') {
            board[y][x] = 'L';
            x -= 1;
            counter += 1;
        } else if (board[y][x] == 'N') {
            board[y][x] = 'L';
            y -= 1;
            counter += 1;
        } else if (board[y][x] == 'S') {
            board[y][x] = 'L';
            y += 1;
            counter += 1;
        } else if (board[y][x] == 'T') {
            cout << counter << endl;
            break;
        }

        if (x >= cols || y >= rows || x < 0 || y < 0) {
            cout << "Out" << endl;
            break;
        }
    }
}