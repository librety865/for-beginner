#include<stdio.h>
int main() {
	int n, a, b = 0;
	scanf("%d", & n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", & arr[i]);	//TODO
	}
	for (int i = 0; i < n; i++) {
		a = arr[i];
		b = a + b; //TODO
	}
	printf("%d", b);

	return 0;
}
/*易错点：把arr【0】的情况忘了，导致多输出了一组数*/
/*输入n，再输入n个整数存入数组。计算数组所有数字的总和，输出总和。*/
