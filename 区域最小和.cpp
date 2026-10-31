#include<iostream>
#include<algorithm>
using namespace std;
int arr[20005];
int sum[20020];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, i;
	int left, right;
	cin >> n;
	for ( i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for ( i = 1, right = 0; right < n; i++) {
		while (sum[i] >= 0) {
			sum[i] = arr[right] + sum[i - 1];
			right++;
		}
		left = right + 1;
		while (arr[right] < 0) {
			sum[i] = sum[i] - arr[right];
			right--;
		}
		right = left - 1;
	}
	int *p = max_element(sum + 1, sum + i);
	cout << *p;

	return 0;
}
