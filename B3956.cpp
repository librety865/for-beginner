/*B3956*/
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	char key;
	int sum;
	for (int i = 1; i <= n; i++) {
		cin >> key;
		if (key >= 97 && key <= 122) {
			sum += key - 'a' + 1;
		}
		if (key >= 65 && key <= 90) {
			sum -= key;
		}
	}
	cout << sum;
	return 0;
}
