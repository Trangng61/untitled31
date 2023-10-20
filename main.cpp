#include <iostream>

using namespace std;


int main() {
    int x;
    cin >> x;
    int y;
    cin >> y;
    int a[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; i < y; i++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; i < y; i++) {
            cout << a[i][j];
        }
    }

    cout << endl;
    return 0;
}
