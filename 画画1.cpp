/*
小 R 发现按照以下规则输出 2n+1 行 2m+1 列字符，可以得到一个包含 n×m 个空格的网格图：
第奇数行第奇数列的字符为 +。
第奇数行第偶数列的字符为 -。
第偶数行第奇数列的字符为 |。
第偶数行第偶数列的字符为空格。
*/
#include<iostream>
using namespace std;
int n, m;
char arr[2000][2000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= 2 * n + 1; i++) {
		for (int k = 1; k <= 2 * m + 1; k++) {
			if (i % 2 == 1 && k % 2 == 1)arr[i][k] = '+';
			if (i % 2 == 1 && k % 2 == 0)arr[i][k] = '-';
			if (i % 2 == 0 && k % 2 == 1)arr[i][k] = '|';
			if (i % 2 == 0 && k % 2 == 0)arr[i][k] = ' ';
		}
	}
	for (int i = 1; i <= 2 * n + 1; i++) {
		for (int k = 1; k <= 2 * m + 1; k++) {
			cout << arr[i][k];
		}
		cout << "\n";
	}
	return 0;
}
