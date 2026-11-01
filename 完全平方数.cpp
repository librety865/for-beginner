/*
小杨同学正在研究完全平方数。
平方： 一个数的平方等于这个数乘以这个数本身。
完全平方数： 指可以恰好表示为某个正整数的平方的数。
例如，9 是完全平方数，因为 9=3^2=3×3；但 27 不是，因为 27 不能表示为任何正整数的平方。
给定两个正整数 l 和 r（保证 l≤r），小杨同学想知道 l 到 r 之间的所有正整数中（包含 l 和 r），有多少个数是完全平方数。
*/

#include<iostream>
#include<cmath>
using namespace std;
int l, r;
double x, y;
int m, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> l >> r;
	x = sqrt(l);
	y = sqrt(r);
	m = x;
	n = y;
	if (m == x && n != y) {
		cout << n - m + 1;
	}
	if (m != x && n == y)cout << n - m ;
	if (m != x && n != y)cout << n - m ;
	if (m == x && n == y) {
		cout << n - m + 1;
	}
	return 0;
}
/*
一定要注意分类讨论!!!!!!
*/
