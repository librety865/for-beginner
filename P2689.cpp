/*P2689*/
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t;
	int x1, x2, y1, y2;
	int n, con = 0;
	char move;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> t;
	n = t;
	if (x1 < x2 && y1 > y2) {
		while (t--) {
			cin >> move;
			if (move == 'E' && x1 < x2) {
				x1++;
				con++;
			}
			if (move == 'S' && y1 > y2) {
				y1--;
				con++;
			}
			if (x1 == x2 && y1 == y2) {
				cout << con;
				return 0;
			}
		}
	}
	if (x1 > x2 && y1 > y2) {
		while (t--) {
			cin >> move;
			if (move == 'S' && y1 > y2) {
				y1--;
				con++;
			}
			if (move == 'W' && x1 > x2) {
				x1--;
				con++;
			}
			if (x1 == x2 && y1 == y2) {
				cout << con;
				return 0;
			}
		}
	}
	if (x1 < x2 && y1 < y2) {
		while (t--) {
			cin >> move;
			if (move == 'N' && y1 < y2) {
				y1++;
				con++;
			}
			if (move == 'E' && x1 < x2) {
				x1++;
				con++;
			}
			if (x1 == x2 && y1 == y2) {
				cout << con;
				return 0;
			}
		}
	}
	if (x1 > x2 && y1 < y2) {
		while (t--) {
			cin >> move;
			if (move == 'N' && y1 < y2) {
				y1++;
				con++;
			}
			if (move == 'W' && x1 > x2) {
				x1--;
				con++;
			}
			if (x1 == x2 && y1 == y2) {
				cout << con;
				return 0;
			}
		}
	}
	if (x1 == x2 && y1 == y2) {
		cout << n - t;
		return 0;
	}
	cout << "-1";
	return 0;
}
