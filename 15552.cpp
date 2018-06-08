#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    for (; t > 0; --t) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}
