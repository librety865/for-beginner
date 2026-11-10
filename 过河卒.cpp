/*
棋盘上 A 点有一个过河卒，需要走到目标 B 点。卒行走的规则：可以向下、或者向右。同时在棋盘上 C 点有一个对方的马，该马所在的点和所有跳跃一步可达的点称为对方马的控制点。因此称之为“马拦过河卒”。

棋盘用坐标表示，A 点 (0,0)、B 点 (n,m)，同样马的位置坐标是需要给出的。

现在要求你计算出卒从 A 点（不经过马的控制点）能够到达 B 点的路径的条数，假设马的位置是固定不动的，并不是卒走一步马走一步。

输入格式
一行四个正整数，分别表示 B 点坐标和马的坐标。

输出格式
一个整数，表示所有的路径条数。

输入输出样例
输入

6 6 3 3
输出

6
*/
/*第一次的思路如下，想采用一种类似于枚举法的方式来解决这个问题但是第一可能超时，这条路好像叫DP版本，我要换一种思路--DFS
#include<stdio.h>
int main() {
	int a, b, c, d, m, n;
	scanf("%d%d", &m, &n);
	int arr[20][20];
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			arr[j][i] = 1; //TODO

		}
		printf("%d\n", arr);
	}
	printf("%d", arr);
	return 0;
}*/



/*#include <stdio.h>

// 马的8个方向
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int n, m, mx, my;
int ban[25][25];  // 标记是否是马的控制点

// DFS函数：当前在(x,y)，返回从(x,y)走到终点(n,m)的路径数量
long long dfs(int x, int y) {
// 越界 或者 这个点是马的控制点，不能走
	if (x > n || y > m || ban[x][y] == 1) {
		return 0;
	}
// 走到终点了，找到一条合法路径
	if (x == n && y == m) {
		return 1;
	}
// 卒只能向下(x+1,y) 或者 向右(x,y+1)
	return dfs(x + 1, y) + dfs(x, y + 1);
}

int main() {
	scanf("%d%d%d%d", &n, &m, &mx, &my);

	ban[mx][my] = 1; // 马本身的位置封锁
	for (int i = 0; i < 8; i++) {
		int nx = mx + dx[i];
		int ny = my + dy[i];
		if (nx >= 0 && ny >= 0 && nx <= n && ny <= m) {
			ban[nx][ny] = 1;
		}
	}

	long long ans = dfs(0, 0);
	printf("%lld\n", ans);
	return 0;
}*/

