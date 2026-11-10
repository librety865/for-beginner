#include<iostream>
using namespace std;
char map[10005][10005];
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0), cin.tie(0);
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k <= m; k++) {
			cin >> map[i][k];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (map[1][i] != '#') {
			for (int k = 1; k <= m; k++) {
				if (map[k][m] != '#') {
					cout << 'YES';
					return 0;
				}
			}
		}
		if (map[i][1] != '#') {
			for (int k = 1; k <= m; k++) {
				if (map[n][k] != '#') {
					cout << 'YES';
					return 0;
				}
			}
		}
	}
	cout << 'NO';
	return 0;
}
