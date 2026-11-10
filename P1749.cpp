/*P1749*/
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int T;
	long long k, n;
	long long least;
	cin >> T;
	while (T--) {
		cin >> k >> n;
		least = ((1 + n) * n + 1) / 2;
		if (least > k)cout << "No" << "\n";
		else cout << "Yes" << "\n";
	}
	return 0;
}
