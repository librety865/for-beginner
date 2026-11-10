#include<iostream>
#include<algorithm>
using namespace std;
int sum;
int fa[100005];
int con[100005];
int find(int x) {
	if (x != fa[x]) fa[x] = find(fa[x]);
	return fa[x];
}
void merge(int x, int y) {
	if (find(x) != find(y)) {
		fa[find(y)] = find(x);
	}
}

int main() {
	cin.tie(0), cout.tie(0);
	ios::sync_with_stdio(0);
	int n, m, x, y;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	while (m--) {
		cin >> x >> y;
		merge(x, y);
	}
	for (int i = 1; i <= n; i++) {
		if (fa[i] == i) sum++;
	}
	cout << sum - 1;
	return 0;
}
