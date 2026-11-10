/*
蒟蒻虽然忘记密码，但他还记得密码是由一个字符串组成。
密码是由原文字符串（由不超过 50 个小写字母组成）中每个字母向后移动 n 位形成的。z 的下一个字母是 a，如此循环。
他现在找到了移动前的原文字符串及 n，请你求出密码。
*/
#include<iostream>
using namespace std;
int n;
string cookie;
char key[50];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	cin >> cookie;
	for (int i = 0; i < (int)cookie.size(); i++) {
		key[i] = 'a' + (cookie[i] - n + 26) % 26;
	}
	for (int i = 0; i <= (int)cookie.size(); i++) {
		cout << key[i];
	}

	return 0;
}
