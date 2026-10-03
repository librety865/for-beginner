/*题目描述
输入n，输入n个整数存入数组。逆序打印数组（从最后一个元素，打印到第一个）。

输入样例：
4
1 2 3 4
输出样例：
4 3 2 1
考点：下标控制，倒着遍历数组*/
#include<stdio.h>
int main() {
	int a, c, n;
	int arr[1000];
	scanf("%d", &n);
	for (int a = 0; a < n; a++) {
		scanf("%d", & arr[a]); //TODO
	}
	for (int c = n - 1; c >= 0; c--) {
		printf("%d", arr[c]); //TODO
	}
	return 0;
}
