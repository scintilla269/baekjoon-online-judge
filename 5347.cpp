#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}
