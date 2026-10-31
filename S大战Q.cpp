/*
小 S 和小 Q 带领着各自的队伍走上战台，一场激烈的战斗在所难免。在此开战之际，你作为观众，非常想要预测战斗的结果。

战斗规则是这样的：双方队伍各 n 个人，比赛共 n 局，第 i 局双方都会派出自己的第 i 名队员。
用 ai
来表示小 S 队伍中第 i 名队员的战斗力，用 bi来表示小 Q 队伍中第 i 名队员的战斗力。那么对于第 i 局比赛，战斗力更大的队员所在的一方获胜。如果两位队员战斗力相同，则该局没有获胜方。
最终：

如果小 S 队伍获胜的局数大于小 Q 队伍获胜的局数，则小 S 获得最终胜利；
如果小 S 队伍获胜的局数小于小 Q 队伍获胜的局数，则小 Q 获得最终胜利；
如果小 S 队伍获胜的局数等于小 Q 队伍获胜的局数，双方平局。
请你依次输出小 S 队伍获胜的局数和小 Q 队伍获胜的局数的值，并判断哪方获得最终胜利或双方平局。
*/


#include<iostream>
using namespace std;
int a[1000010], b[1000010];
int n, s, q;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			s++;
			continue;
		}
		if (a[i] < b[i]) {
			q++;
			continue;
		}
	}
	cout << s << " " << q << endl;
	if (s > q) {
		cout << "S";
	} else {
		if (q > s) {
			cout << "Q";
		} else cout << "Tie";
	}
	return 0;
}
