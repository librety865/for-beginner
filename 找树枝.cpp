/*
小鸟正在森林里寻找合适的树枝。
现在有 n 根长度分别为 a1,a2,⋯,a n的树枝。小鸟目前已经有两根长度分别为 x,y 的树枝，她希望再找到一根树枝，使得这三根树枝中，某两根的 长度之和 或 长度之积 恰好为另一根的长度。
请你告诉她，在这 n 根树枝中，有几根可以满足她的要求？这些满足要求的树枝中，最长的那一根有多长？
*/
#include<iostream>
#include<algorithm>
using namespace std;
int n, x, y, con, k;
int a[1005];
int b[1150];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == x * y || a[i]*x == y || a[i]*y == x || a[i] == x + y || x + a[i] == y || y + a[i] == x) {
			con++;
			b[k] = a[i];
			k++;
		}

	}
	int*p = max_element(b, b + n - 1);
	cout << con << "" << *p << endl;
	return 0;
}
