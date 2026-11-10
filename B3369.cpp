/*B3369*/
#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	long long x, y, n;
	long long price;
	cin >> x >> y >> n;
	if (n < 10) {
		price = n*(x - 1);
	} else {
		if (10 * (x - 1) > y - 1) {
			price = n / 10 * (y - 1) + n % 10;
		} else {
			price = n*(x - 1);
		}
	}
	cout << price;
	return 0;
}
