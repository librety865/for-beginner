/*
对于一个正整数 n，我们将其转换为不含前导零的二进制表示，如果这个二进制序列从左向右读与从右向左读完全相同，则称该数为二进制回文数。
*/

#include<iostream>
using namespace std;
int n, i, con1, con2, x, y;
int arr[200000];
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		x = i;
		for (int j = 0; x > 0; j++) {
			if (x % 2 == 0) {
				arr[j] = 0;
			}
			if (x % 2 == 1) {
				arr[j] = 1;
			}
			x = x / 2;
			y = j;
		}
		for (int k = 0; k <= y / 2; k++) {
			if (arr[k] == arr[y - k]) {
				con1++;
			}
		}
		if (con1 == y / 2)con2++;
	}

	cout << con2;
	return 0;
}
