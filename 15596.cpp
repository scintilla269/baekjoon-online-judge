#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (auto const &x : a) {
        ans += x;
    }
	return ans;
}
