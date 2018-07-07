#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        vec[i] = i + 1;
    }
    while (M--) {
        int i, j;
        cin >> i >> j;
        reverse(vec.begin() + i - 1, vec.begin() + j);
    }
    for (auto const &x : vec) {
        cout << x << ' ';
    }
    return 0;
}
