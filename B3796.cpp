/*B3796*/
#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int m, n, a, back_money, use_money = 0, now_money;
	cin >> n >> m;
	now_money = m;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a > now_money) {
			continue;
		} else {
			now_money -= a;
			use_money += a;
		}
	}
	back_money = use_money - use_money * 88 / 100;
	cout << back_money;
	return 0;
}
