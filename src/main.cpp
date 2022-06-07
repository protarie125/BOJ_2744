#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string x;
	cin >> x;

	constexpr auto offset = 'A' - 'a';

	const auto& n = x.length();
	for (int i = 0; i < n; ++i) {
		if ('a' <= x[i] && x[i] <= 'z') {
			x[i] += offset;
		}
		else {
			x[i] -= offset;
		}
	}

	cout << x;

	return 0;
}