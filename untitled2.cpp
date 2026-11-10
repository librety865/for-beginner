#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100005], con[3];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1)con[0]++;
		if (a[i] == 2)con[1]++;
		if (a[i] == 3)con[2]++;
	}
	cout << con[0] << " " << con[1] << " " << con[2] << "\n";
	if (con[0] == con[1] && con[1] == con[2]) {
		cout << "1 2 3";
		return 0;
	} else {
		if (con[0] > con[1]) {
			if (con[2] == con[0])cout << "1 3";
			if (con[2] > con[0]) cout << "3";
			if (con[2] < con[0])cout << "1";
			return 0;
		}
		if (con[0] < con[1]) {
			if (con[2] > con[1]) cout << "3";
			if (con[2] < con[1]) cout << "2";
			if (con[2] == con[1]) cout << "2 3";
			return 0;
		}
		if (con[0] < con[1])cout << "1 2";
	}
	return 0;
}
