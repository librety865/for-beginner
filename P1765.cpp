/*P1765*/
#include<iostream>
using namespace std;
string m;
int con;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	getline(cin, m);
	for (int i = 0; i < (int)m.size(); i++) {
		char ch = m[i];
		switch (ch) {
			case 97:
			case 100:
			case 103:
			case 106:
			case 109:
			case 112:
			case 116:
			case 119:
			case 32:
				con++;
				break;
			case 98:
			case 101:
			case 104:
			case 107:
			case 110:
			case 113:
			case 117:
			case 120:
				con++;
				con++;
				break;
			case 99:
			case 102:
			case 105:
			case 108:
			case 111:
			case 114:
			case 118:
			case 121:
				con++;
				con++;
				con++;
				break;
			case 115:
			case 122:
				con++;
				con++;
				con++;
				con++;
				break;

		}
	}
	cout << con;
	return 0;
}
