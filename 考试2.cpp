#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100005], t, cha, min_cha, con;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> t;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] >= t)cha = a[i] - t;
		if (t > a[i])cha = t - a[i];
		if (i == 1) {
			min_cha = cha;
		}
		if (min_cha > cha)min_cha = cha;
	}
	cout << min_cha;
	for (int i = 1; i <= n; i++) {
		if (a[i] - t == min_cha || t - a[i] == min_cha)con++;
	}
	cout << " " << con << "\n";
	for (int i = 1; i <= n; i++) {
		if (a[i] - t == min_cha || t - a[i] == min_cha) {
			cout << i << " ";
		}
	}
	return 0;
}
