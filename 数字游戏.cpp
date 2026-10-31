/*
小洛有一个正整数 n，他会进行若干次下列操作：
取出正整数 n 的末位，记作 x；
将 x 平方之后，保留个位，放于 n 的首位之前（如果是 0，则数字不保留前导 0）；
上述两步合计为一次操作。例如有一个正整数 142，它可以进行如下操作：
取出末尾的 2，原正整数变为 14；2^2=4，放于 14 首位之前成为 414，第一次操作完成；
取出末尾的 4，原正整数变为 41；
4^2=16，保留个位的 6，放于 41 的首位成为 641，第二次操作完成；
以此类推……
现在小洛想知道，对于一个正整数 n，能否进行不超过 q 次操作让其变为正整数 m。请你帮帮他。
*/
#include<iostream>
#include<cmath>
using namespace std;
int m, n, q;
int x, y, z, p;
int temp, con;
int a[1000009];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m >> q;
	temp = n;
	z = n;
	while (z > 0) {
		z = z / 10;
		con++;
	}
	for (int i = 1; i <= q; i++) {
		x = temp % 10;
		y = temp / 10;
		p = pow(x, 2);
		if (p != 0) {
			temp = (p % 10) * pow(10, con - 1 ) + y;
			a[i] = temp;
		} else {
			temp = y;
			a[i] = temp;
			con--;
		}
		if (temp == m) {
			for (int k = 1; k <= i; k++) {
				cout << a[k] << endl;
			}
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
