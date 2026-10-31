/*
某学校拟组织学业水平测试，共有 n 个考场可以使用，依次编号为第 1∼n 考场。第 i 考场共有 ri行ci列个座位。
该学校共有 m 名考生。学校必须从第 1 考场开始，编号连续地使用若干个考场。每个考场配备两名监考员。保证所有考场的位置总和足以容纳全部考生。
请你计算，学校最少聘请多少名监考员？
*/
#include<iostream>
using namespace std;
int r[2000], c[2000];
int n, m, x, con;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> r[i] >> c[i];
		m = m - r[i] * c[i];
		con++;
		if (m < 0) {
			cout << con * 2;
			return 0;
		}
	}
	return 0;
}
