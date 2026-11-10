/*B3360*/

#include<iostream>
using namespace std;
int T;
int n;
int con;
int a[10005];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> T;
	while (T--) {
		con = 0;
		cin >> n;
		if (n == 0)cout << "no";
		else {
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					cout << "yes" << "\n";
					break;
				} else {
					con++;
					if (con == n)cout << "no" << "\n";
				}
			}
		}
	}
	return 0;
}
