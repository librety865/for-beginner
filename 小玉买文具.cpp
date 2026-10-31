/*班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1 元 9 角，而班主任给小玉的钱是 a 元 b 角，小玉想知道，她最多能买多少只签字笔呢。*/
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	float a, b;
	float x;
	int y;
	cin >> a >> b;
	x = a + 0.1 * b;
	y = x / 1.9;
	cout << y;
	return 0;
}
