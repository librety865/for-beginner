#include<iostream>
#include<algorithm>
using namespace std;

int n, k, x;
int arr[10000], con, con_max;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n - k; i++) {
		con = 0;
		for (int j = i; j <= i + k - 1; j++) {
			if (arr[j] == 'F')con++;
			if (con > con_max) {
				con_max = con;
				x = i;
			}
		}
	}
	cout << con_max << " " << x;
	return 0;
}
