/*
凯撒密码是一种替换加密技术，明文中的所有字母都在字母表上向后（或向前）按照一个固定数目进行偏移后被替换成密文。
例如，当偏移量是 3 的时候，所有的字母 A 将被替换成 D，B 被替换成 E，C 被替换成 F，以此类推，W 被替换成 Z，X 被替换成 A，Y 被替换成 B，Z 被替换成 C。
这个加密方法是以罗马共和时期凯撒的名字命名的，据称当年凯撒曾用此方法与其将军们进行联系。
但是和所有的利用字母表进行替换的加密技术一样，凯撒密码非常容易被破解，而且在实际应用中也无法保证通信安全。
现在给你一个已破解的凯撒密码明文与密文，与一个有相同偏移量的未破解凯撒密码密文，请你帮忙破解它。
*/
#include<iostream>
#include<string>
using namespace std;
string a, b, c;
int d, e;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	char res[105];
	d = (b[0] - a[0] + 25) % 26;
	if (b[0] - a[0] < 0) {
		for (int i = 0; i <= (int)c.size(); i++) {
			e = c[i] - 'A';




		}
	}

	return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;

string a, b, c;   // 全局string

int main()
{
cin >> a >> b >> c;
int d = (b[0] - a[0] + 26) % 26;
string res;
for (int i = 0; i < c.size(); i++)
{
char ch = c[i];
int num = ch - 'A';
num = (num - d + 26) % 26;
res += (char)('A' + num);
}
cout << res << endl;
return 0;
}
*/
