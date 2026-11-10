/*B3697*/
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	long long a, b, c;
	cin >> a >> b >> c;
	if (a % c != 0 || b % c != 0)cout << "-1";
	else {
		cout << (a / c)*(b / c);
	}

	return 0;
}
