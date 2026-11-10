/*
某校大门外长度为 l 的马路上有一排树，每两棵相邻的树之间的间隔都是 1 米。
我们可以把马路看成一个数轴，马路的一端在数轴 0 的位置，另一端在 l 的位置；数轴上的每个整数点，即 0,1,2,…,l，都种有一棵树。
由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。
现在要把这些区域中的树（包括区域端点处的两棵树）移走。
你的任务是计算将这些树都移走后，马路上还有多少棵树。
*/

#include<iostream>
using namespace std;
int le[100005], r[100005];
int lo, m, con;
int tree[100005];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> lo >> m;
	for (int i = 0; i <= 100004; i++) {
		tree[i] = {2};
	}
	for (int i = 0; i <= lo; i++) {
		tree[i] = {1};
	}
	for (int i = 0; i < m ; i++) {
		cin >> le[i] >> r[i];
		for (int k = le[i]; k <= r[i]; k++) {
			tree[k] = 0;
		}
	}
	for (int i = 0; i <= lo; i++) {
		if (tree[i] == 1) {
			con++;
		}
	}
	cout << con;
	return 0;
}
