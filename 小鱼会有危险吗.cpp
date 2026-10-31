/*
有一次，小鱼要从 A 处沿直线往右边游，小鱼第一秒可以游 7 米，从第二秒开始每秒游的距离只有前一秒的 98\%。
有个极其邪恶的猎人在距离 A 处右边 s 米的地方，安装了一个隐蔽的探测器，探测器左右 x 米之内是探测范围。
一旦小鱼进入探测器的范围，探测器就会在这一秒结束时把信号传递给那个猎人，猎人在一秒后就要对探测器范围内的水域进行抓捕，这时如果小鱼还在这范围内就危险了。
也就是说小鱼一旦进入探测器范围，如果能在下 1 秒的时间内马上游出探测器的范围，还是安全的。现在给出 s 和 x 的数据，请你判断小鱼会不会有危险
？如果有危险输出 `y`，没有危险输出 `n`。
*/
#include<iostream>
using namespace std;
double  x, s;
double dist, v0;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> s >> x;
	v0 = 7;
	dist = 0;
	while (dist < s - x) {
		if (dist == 0) {
			dist = 7;
			continue;
		}
		v0 = v0 * 0.98;
		dist += v0;
	}
	v0 = v0 * 0.98;
	dist += v0;
	if (dist > s + x)cout << "n";
	if (dist <= s + x)cout << "y";
	return 0;
}

/*
whlie是无限循环，for是有次数的循环
*/
