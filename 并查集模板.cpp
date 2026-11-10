#include<iostream>
using namespace std;
int fa[1005];
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
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int m, n, x[], y, t;




	return 0;
}
