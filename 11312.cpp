#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        long long A, B;
        cin >> A >> B;
        cout << A / B * A / B << '\n';
    }
    return 0;
}
