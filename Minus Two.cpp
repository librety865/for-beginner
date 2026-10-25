/*H - Minus Two
You are given an array a1,a2,…,an. You may perform the following operation:
• For all indices i (1 ≤ i ≤ n), set ai = |ai − 2|.
Find the maximum possible frequency of any integer in a after performing the operation an arbitrary number (possibly zero) of times.

Input
The first line of each input contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases.
The first line of each test case contains an integer n (1 ≤ n ≤ 2 * 10^5) — the length of a.
The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9) — the array a.
It is guaranteed that the sum of n over all test cases does not exceed 2 ⋅ 10^5.

Output
For each test case, output a single integer denoting the maximum possible frequency of any integer in a after performing the operation an arbitrary number of times.
*/
#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000005];
int n;
long long sum[3];
long long x;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		sum[0] = {0};
		sum[1] = {0};
		sum[2] = {0};
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			x = a[i] % 4;
			switch (x) {
				case 1:
				case 3:
					sum[1]++;
					break;
				case 2:
					sum[2]++;
					break;
				default:
					sum[0]++;
					break;
			}
		}
		cout << *max_element(sum, sum + 3);
		cout << "\n";
	}
	return 0;
}
