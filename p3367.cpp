/*
p3367
*/

#include<iostream>
using namespace std;
int fa[200005];
int find(int x) {
	if (x != fa[x]) {
		fa[x] = find(fa[x]);
	}
	return fa[x];

}
void mercy(int x, int y) {
	if (find(x) != find(y)) {
		fa[find(y)] = find(x);
	}
}
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		fa[i] = i;
	}
	while (n--) {
		int x, y, z;
		cin >> z >> x >> y;
		if (z == 1)mercy(x, y);
		if (z == 2) {
			if (find(x) != find(y)) {
				cout << "N\n";
			} else cout << "Y\n";
		}
	}
	return 0;
}

