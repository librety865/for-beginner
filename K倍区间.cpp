#include<iostream>
using namespace std;
int arr[100005];
long long arr1[100010];
long long arr2[100010] = {1};
int main() {
	int n, k;
	long long x, y = 0;
	cin >> n;
	cin >> k;
	for (int i = 1; i <= n ; i++) {
		cin >> arr[i]; //TODO
	}
	for (int i = 1; i <= n; i++) {
		arr1[i] = arr1[i - 1] + arr[i];
		x = arr1[i] % k;
		y += arr2[x];
		arr2[x]++;
	}
	cout << y;
	return 0;
}
