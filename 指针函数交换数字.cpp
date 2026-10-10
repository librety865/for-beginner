/*
题目描述
写一个swap函数，参数是两个int指针，在函数内部交换两个变量的值。
main函数输入两个整数，调用swap后输出交换结果。
输入样例：3 7
输出样例：7 3
*/

#include<stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("%d\n%d", x, y);
	return 0;
}
