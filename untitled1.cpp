#include<iostream>
#include<algorithm>
using namespace std;
int a, b, n;
long long finish_people, all_work;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a >= b) {
			finish_people++;
			all_work += a;
		} else all_work += a;
	}
	cout << finish_people << " " << all_work;
	return 0;
}
