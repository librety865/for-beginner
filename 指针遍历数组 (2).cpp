/*
题目描述
数组int arr[]={11,22,33,44,55};
不使用下标arr[i]，只用指针遍历数组，打印全部元素。
输出样例：
11 22 33 44 55
考察：数组名是首元素地址、指针移动p++。

*/
#include<stdio.h>
int main() {
	int arr[5] = {11, 22, 33, 44, 55};
	int *p = arr;
	for (int i = 0; i <= 5; i++) {
		printf("%d\n", *(p + i));
	}
	return 0;
}

