#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char arr[1000005];
int n, k;
int con, sum;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'F') {
			con++;
		}
		if (arr[i] == 'P') {
			con = 0;
		}
		if (con == k) {
			con = 0;
			sum++;
		}
	}
	cout << sum << " " << con;
	return 0;
}
