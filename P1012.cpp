/*P1012*/
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int n;
int a[25];
int x, num;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	num = a[n];
	a[0] = {0};
	for (int k = 0; n - k - 1 > 0; k++) {
		while (a[n - k] > 0) {
			a[n - k] = a[n - k] / 10;
			x++;
		}
		num = a[n - k - 1] * (int)pow(10, x) + num;
	}
	cout << num;
	return 0;
}
