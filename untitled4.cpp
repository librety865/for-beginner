#include<iostream>
#include<algorithm>
using namespace std;
int n, t;
long long sum, k;
double dp[4000000010];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> t;
	for (int i = 1; i <= 4000000010; i++) {
		dp[i] += i;
	}
	while (t--) {
		cin >> n >> k;
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		cout << sum / k << " " << sum % k << "\n";

	}
	return 0;
}
