/*
小杨同学有一串数字，想把它们变成另一串数字，这个过程叫做加密。
他有一本密码本，密码本告诉你：每个数字应该变成哪个数字。
数字一共有 10 个：0、1、2、3、4、5、6、7、8、9。
密码本会依次告诉你：
0 要变成什么
1 要变成什么
2 要变成什么
……
9 要变成什么
请你按照密码本，把原来的每个数字都换成新的数字，然后输出。
*/

#include<iostream>
using namespace std;
int num[10];
int n;
int arr[20005];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << num[arr[i]];
		cout << " ";
	}

	return 0;
}

/*
难点在于如何“给数字赋值”
*/
