#include<stdio.h>
int main() {
	int n, a, b;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		//TODO
	}
	n = arr[0];
	for (int i = 0; i < n; i++) {
		if (n <= arr[i]) {
			n = arr[i]; //TODO
		}
		//TODO
	}
	printf("\n%d", n);
	return 0;
}

/*题目描述
输入n，输入n个整数存入数组，找出数组里面最大的数字并输出。

输入样例：
6
3 7 2 9 1 5
考点：打擂台思想，遍历比较s
*/
