#include <iostream>
using namespace std;

int main() {
    int n, x, num;
    cin >> n >> x;
    for (; n > 0; --n) {
        cin >> num;
        if (num < x) {
            cout << num;
            if (n != 1) {
                cout << ' ';
            }
        }
    }
    return 0;
}
