/*
小杨同学有一串字符，里面可能有：

大写字母，比如 A、B、C
小写字母，比如 a、b、c
数字，比如 0、1、2
现在小杨同学想把这串字符变一变，规则如下：

如果是大写字母，就变成对应的小写字母；
如果是小写字母，就变成对应的大写字母；
如果是数字，就变成 * 。
请你按照这个规则，帮小杨把整串字符转换好。
*/
#include<iostream>
#include<string>
using namespace std;
int n;
string arr;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	cin.ignore();
	getline(cin, arr);
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= 48 && arr[i] <= 57)cout << '*';
		if (arr[i] >= 65 && arr[i] <= 90)cout << (char)(arr[i] + 32);
		if (arr[i] <= 122 && arr[i] >= 97)cout << (char)(arr[i] - 32);
	}
	return 0;
}
