/*B3781*/
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, a, b, x, y;
	int s_wai, s_paper;
	long long m_lift, m, surprise, max_surprise;
	int a_num, b_num;
	cin >> n >> x >> y >> a >> b;
	surprise = 0;
	max_surprise = 0;
	a_num = 0, b_num = 0;
	for (int i = 1; i <= n; i++) {
		cin >> s_wai >> s_paper >> m;
		m_lift = m - s_wai*x - s_paper*y;
		if (m_lift == 0) {
			b_num++;
			a_num = 0;
			if (b_num >= b)surprise = surprise / 2;
		}
		if (m_lift > 0) {
			b_num = 0;
			a_num++;
			surprise += m_lift;
			if (m_lift > s_wai * x + s_paper * y) {
				surprise += 0.5 * (m_lift + 1);
			}
			if (a_num >= a) {
				surprise = 2 * surprise;
			}
		}
		max_surprise = max(surprise, max_surprise);


	}
	cout << max_surprise << " " << surprise;
	return 0;
}
/*
2 1 1 2 2
5 3 10
6 2 12

*/
