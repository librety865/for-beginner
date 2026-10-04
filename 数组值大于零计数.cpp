/*题目描述
输入n，输入n个整数存入数组。统计数组里面大于0的数字有多少个，输出数量。

输入样例：
5
-1 3 -5 7 0
输出样例：
2
*/
#include<stdio.h>
int main() {
	int n, a, b = 0;
	scanf("%d", &n);
	int arr[1000];
	for (a = 0; a < n; a++) {
		scanf("%d", &arr[a]);	//TODO
	}
	for (a = 0; a < n; a++) {
		if (arr[a] > 0) {
			b++;
			//TODO
		}//TODO
	}
	printf("%d", b);
	return 0;
}
