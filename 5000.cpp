#include <iostream>
#include <vector>
using namespace std;

bool checkParity(vector<int> &vec) {
    bool parity = false;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] > vec.size()) {
            continue;
        }
        bool cycle = false;
        for (int j = vec[i] - 1; i != j; j = vec[j] - 1 - vec.size()) {
            cycle = !cycle;
            vec[j] += vec.size();
        }
        vec[i] += vec.size();
        if (cycle) {
            parity = !parity;
        }
    }
    return parity;
}

int main() {
    int n;
    cin >> n;
    vector<int> A, B;
    A.reserve(n);
    B.reserve(n);
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        A.push_back(num);
    }
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        B.push_back(num);
    }

    if (checkParity(A) == checkParity(B)) {
        cout << "Possible";
    } else {
        cout << "Impossible";
    }
    return 0;
}
