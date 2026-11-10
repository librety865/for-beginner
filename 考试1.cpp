#include<iostream>
#include<algorithm>
using namespace std;
int n, cha;
long long a, b, max_cha = 0, sum = 0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a < b) {
			cha = b - a;
			sum += cha;
			if (max_cha > cha) {
				continue;
			}
			if (cha > max_cha) {
				max_cha = cha;
			}
		}
	}
	cout << max_cha << " " << sum;
	return 0;
}
