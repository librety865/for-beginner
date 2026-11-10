#include<iostream>
using namespace std;
int n, k, con = 0, temp = 1;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		temp = i;
		for (int j = 0; temp > 0; j++) {
			if (k == temp % 10) {
				con++;
			}
			temp = temp / 10;
		}
	}
	cout << con;
	return 0;
}
