/*如果一个正整数的十进制表示中，每种数字都恰好出现了偶数次，Dr. X 就认为它是幸运数字。例如：
11 是幸运数字，数字 1 出现了 2 次 (偶数次)。
131131 是幸运数字，数字 1 出现了 4 次，数字 3 出现了 2 次，都是偶数次。
23333 不是幸运数字，因为数字 2 出现了 1 次 (奇数次)。
123 不是幸运数字，因为数字 1、2、3 各出现了 1 次 (奇数次)。
给定两个正整数 a 和 b，请你计算 a,a+1,a+2,…,b 中幸运数字的数量。*/
#include<iostream>
using namespace std;
int start, en, mid;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int num[20];
	int con[10];
	int sum = 0;
	bool ok;
	cin >> start >> en;
	for (int i = start; i <= en; i++) {
		mid = i;
		ok = 1;
		for (int t = 0; t < 10; t++) {
			con[t] = {0};
		}
		for (int t = 0; t < 20; t++) {
			num[t] = {0};
		}
		for (int k = 0; mid > 0; k++) {
			num[k] = mid % 10;
			mid = mid / 10;
			con[num[k]]++;

		}
		for (int j = 0; j <= 9; j++) {
			if (con[j] % 2 == 1) {
				ok = 0;
				break;
			}

		}
		if (ok)sum++;
	}
	cout << sum;
	return 0;
}
