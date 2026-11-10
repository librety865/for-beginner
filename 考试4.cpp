#include<iostream>
#include<algorithm>
using namespace std;
int t;
long long zhongxin, shengyu, n, m;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == 1 || m == 1) {
			cout << n*m <<  " " <<  "0" << "\n";
			continue;
		}
		if (n == 2 || m == 2) {
			cout << n*m << " " << "0" << "\n";
			continue;
		}
		zhongxin = (m - 2) * (n - 2);
		shengyu = m*n - zhongxin;
		cout << shengyu << " " << zhongxin << "\n";
	}
	return 0;
}
