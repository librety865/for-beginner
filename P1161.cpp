#include<iostream>
using namespace std;
double a[50000];
int t[50000];
int lamp[2000010];
int num[50000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= 2000009; i++) {
		lamp[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> t[i];
		for (int k = 1; k <= t[i]; k++) {
			num[k] = a[i] * k;
			if (lamp[num[k]] == 1)lamp[num[k]] = 0;
			else {
				if (lamp[num[k]] == 0)lamp[num[k]] = 1;
			}
		}
	}
	for (int i = 1; i <= 2000009; i++) {
		if (lamp[i] == 1) {
			cout << i;
			return 0;
		}
	}
	return 0;
}
