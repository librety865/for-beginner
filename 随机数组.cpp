/*
题目描述
输入n，用随机函数生成n个 1~100 的整数存入数组，然后输出全部数组内容。
提示：rand()%100 +1 得到1~100
输入样例：
6
输出样例（每次运行数字不一样）：
23 71 5 88 12 49
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, a;
	scanf("%d", &a);
	srand(a);
	int num = rand();
	int arr[1000];
	printf("\n\n\n");
	for (int i = 0; i < a; i++) {
		num = (num + 953) % 101;
		arr[i] = num;
		printf("%d", arr[i]);
		printf("\n\n\n");
	}
	return 0;
}
