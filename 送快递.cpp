/*
投送的目标区域是一个圆形空地，它的边界在地图上用星号 * 标出。地图上的空白区域用半角点号 . 表示，每个包裹的落点用小写字母 o 标记。
上图中，* 围成的区域代表圆形空地。包裹 o 如果落在边界围成的区域内部，就是一次正确投送。Dr. X 想请你统计正确投送的包裹数量。
包裹要么在圆内，要么在圆外，保证不会在圆形的边界上。
*/
#include<iostream>
using namespace std;
char a[55][55];
int m, n, sum = 0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> a[i][k];
		}
	}
loop:
	for (int i = 1; i <= m; i++) {
		for (int k = 1; k <= n; k++) {
			if (a[i][k] == 'o') {
				for (int x = 1; x <= i; x++) {
					if (a[x][k] == '*') {
						for (int y = i; y < m; y++) {
							if (a[y][k] == '*') {
								for (int p = 1; p <= k; p++) {
									if (a[i][p] == '*') {
										for (int q = k; q < n; q++) {
											sum++;
											goto loop;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << sum;
	return 0;
}
