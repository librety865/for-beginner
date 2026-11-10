#include<iostream>
using namespace std;
double v[10005], w[10005];
double  n, sum1, sum2;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum1 += v[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		sum2 += w[i];
	}
	cout << sum2 / sum1;
	return 0;
}
