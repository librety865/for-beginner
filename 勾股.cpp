/*
小双刚学会勾股定理，得知直角三角形的斜边的平方等于两直角边的平方和。
小双创造了直角三角形数列：数列前两项由小双指定，从第三项开始，数列中的每个数字的平方等于前两项的平方和。
小双给定了数列的前两项，并给定一个数列上限，想让你算算数列的第几项会超过小双给定的数列上限？
*/


#include<iostream>
#include<cmath>
using namespace std;
double a, b, c, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> b >> n;
	if (a > n) {
		cout << 1;
		return 0;
	}
	if (b > n) {
		cout << 2;
		return 0;
	}
	int i = 2;
	c = sqrt(a*a + b*b);
	if (c > n) {
		cout << 3;
		return 0;
	}
	for (; c <= n; i++) {
		c = sqrt(a*a + b*b);
		a = b;
		b = c;
	}
	cout << i;
	return 0;
}
