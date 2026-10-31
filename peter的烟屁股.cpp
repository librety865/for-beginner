/*
Peter 有 n 根烟，他每吸完一根烟就把烟蒂保存起来，k（k>1）个烟蒂可以换一个新的烟，那么 Peter 最终能吸到多少根烟呢？

与某些脑筋急转弯不同的是，Peter 并不能从异次元借到烟蒂，抽完后再还回去。
*/

#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, k, temp, x, y, z = 0;
	cin >> n >> k;
	temp = n;
	for (; temp >= k ;) {
		x = temp % k;
		y = temp / k;
		temp = x + y;
		z += temp - x;
	}
	cout << z + n;
	return 0;
}
