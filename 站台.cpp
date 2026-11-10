/*
火车从始发站（称为第 1 站）开出，在始发站上车的人数为 a，然后到达第 2 站，
在第 2 站有人上、下车，但上、下车的人数相同，因此在第 2 站开出时（即在到达第 3 站之前）车上的人数保持为 a 人。
从第 3 站起（包括第 3 站）上、下车的人数有一定规律：上车的人数都是前两站上车人数之和，而下车人数等于上一站上车人数，一直到终点站的前一站（第 n−1 站），都满足此规律。
现给出的条件是：共有 n 个车站，始发站上车的人数为 a，最后一站下车的人数是 m（全部下车）。试问 x 站开出时车上的人数是多少？
*/

#include<iostream>
using namespace std;
int a_on[30];
int y_on[30];
int total_a[30];
int total_x[30];
int a, n, m, x, y, z;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> a >> n >> m >> x;
	a_on[1] = 1;
	y_on[1] = 0;
	a_on[2] = 0;
	y_on[2] = 1;
	//a_on[3] = 1;
	total_a[1] = 1;
	total_a[2] = 1;
	total_x[1] = 0;
	total_x[2] = 0;
	//total_x[4] = 1;
	for (int i = 3; i <= n; i++) {
		y_on[i] = y_on[i - 1] + y_on[i - 2];
	}
	for (int i = 3; i <= n; i++) {
		a_on[i] = a_on[i - 1] + a_on[i - 2];
	}
	if (x == 1)cout << a;
	if (x == 2)cout << a;
	if (x >= 3) {
		for (int i = 3; i <= n; i++) {
			total_a[i] = a_on[i - 2] + total_a[i - 1];
		}
		for (int i = 3; i <= n; i++) {
			total_x[i] = total_x[i - 1] + y_on[i - 2];
		}
		y = (m - total_a[n - 1] * a) / total_x[n - 1];
		cout << total_a[x]*a + total_x[x]*y;
	}

	return 0;
}
