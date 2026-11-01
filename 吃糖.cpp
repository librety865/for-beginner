/*
小球很喜欢吃甜品。现在她有 a 颗棒棒糖和 b 颗软糖。每颗棒棒糖都需要花 x 分钟吃完，每颗软糖都需要花 y 分钟吃完。

现在她只有 m 分钟的时间用来吃东西，那么她最多可以吃多少颗糖？
*/
#include<iostream>
using namespace std;
int a, b, x, y, m, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> b >> x >> y >> m;
	if (x > y) {
		if (y * b > m) {
			n = m / y;
		}
		if (y * b < m) {
			n = b + (m - y*b) / x;
		}
	}
	if (y > x) {
		if (x * a > m) {
			n = m / x;
		}
		if (x * a < m) {
			n = a + (m - x*a) / y;
		}
	}
	if (x == y)n = m / x;
	cout << n;
	return 0;
}
