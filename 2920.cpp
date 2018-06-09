#include <iostream>
using namespace std;

int main() {
    int arr[8];
    for (int i = 0; i < 8; ++i) {
        cin >> arr[i];
    }
    switch (arr[0]) {
        case 1:
            for (int i = 1; i < 8; ++i) {
                if (arr[i] != i + 1) {
                    cout << "mixed";
                    return 0;
                }
            }
            cout << "ascending";
            break;
        case 8:
            for (int i = 1; i < 8; ++i) {
                if (arr[i] != 8 - i) {
                    cout << "mixed";
                    return 0;
                }
            }
            cout << "descending";
            break;
        default:
            cout << "mixed";
            break;
    }
    return 0;
}
