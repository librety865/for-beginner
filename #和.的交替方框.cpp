/*
题目给定一个整数 n。请你输出一个 n 行 n 列的方形图案。
这个图案从外到内一圈一圈变化：
第 1 圈（最外圈）为 #。
第 2 圈为 .
第 3 圈为 #
以此类推：奇数圈为 #，偶数圈为 .。
*/
#include<iostream>
using namespace std;
int n, x, y, z;
char a[105][105];
int main() {
	cout << "请输入一个不大于100的数\n";
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int k = i; k <= n; k++) {
			if (i % 2 == 1) {
				a[i][k] = '#';
				a[k][i] = '#';
				a[n - i + 1][k] = '#';
				a[k][n - i + 1] = '#';
			}
			if (i % 2 == 0) {
				a[i][k] = '.';
				a[k][i] = '.';
				a[n - i + 1][k] = '.';
				a[k][n - i + 1] = '.';
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cout << a[i][k];
		}
		cout << "\n";
	}
	return 0;
}
