/*B3394*/
#include<iostream>
using namespace std;
long long s, c, n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	c = 0, s = 0;
	for (long long i = 1; i <= n; i++) {
		s += i*i;
	}
	for (int i = 1; i <= n; i++) {
		c += i;
	}
	c = 2 * c;
	c = c + 2 * n;
	cout << c << "\n" << s;
	return 0;
}
