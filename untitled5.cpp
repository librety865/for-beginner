#include<iostream>
#include<algorithm>
using namespace std;
int mate[100005];
int find(int x) {
	if (x != mate[x]) {
		mate[x] = find(mate[x]);
	}
	return mate[x];
}
void mercy(int x, int y) {
	if (find(x) != find(y)) {
		mate[find(y)] = find(x);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, q;
	int op, x, y;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		mate[i] = i;
	}
	while (q--) {
		cin >> op >> x >> y;
		if (op == 1) {
			mercy(x, y);
		}
		if (op == 2) {
			if (find(x) == find(y))cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}
	return 0;
}
