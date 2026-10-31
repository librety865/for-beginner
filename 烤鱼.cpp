/*静流很喜欢吃烤秋刀鱼。

她现在有一条正、反面面积均为 s 的秋刀鱼。这条鱼的烧烤难度为 k。她会按照如下过程烤秋刀鱼：

先烤鱼的正面，花费 k×s 分钟。
然后立刻将鱼翻面（可以认为不花费任何时间），再花费 k×s 分钟烤鱼的反面。
两面烤完后，鱼很烫，需要再等待 k 分钟才能吃。
静流记得自己烤鱼花费了 m 分钟，但是她已经把鱼吃完了，所以不记得鱼的面积（即 s） 是多少了，请你帮她求出来 s 的值。
*/
#include<iostream>
using namespace std;
int s, m, k;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> k >> m;
	s = (m - k) / (2 * k);
	cout << s;
	return 0;
}
