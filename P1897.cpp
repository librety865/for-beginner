#include<iostream>
#include<algorithm>
using namespace std;
int n;
int t_stop = 5;
int t_people = 1;
int t_all;
int a[100005];
int b[20000010];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	for (int i = 0; i < 10004; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < 20000010; i++) {
		b[i] = 0;
	}
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}

	for (int i = 1; i <= 20000010; i++) {
		if (b[i] == 0)continue;
		else {
			b[i] += 5;
			t_all += b[i];
		}
	}
	int*p;
	p = max_element(a, a + 100004);
	cout << t_all + *p * 10;
	return 0;
}
