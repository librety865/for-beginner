/*
   本关任务：输入一个字母，输出由这个字母决定其高度的字符“金字塔”。
例如输入小写字母d，则输出左边的图形，如输入大写字母D，则输出右边图形，它们的高度都为4。（字母a或A表示高度为1，字母b或B表示高度为2，……，字母z或Z表示高度为26）
*/


#include<stdio.h>
int main() {
	char ch;
	int i, j, k, m, n, x = 0;
	printf("请输入一个字母：");
	printf("\n ");
	scanf("%c", &ch);
	if ('a' < ch && 'z' >= ch) {
		i = ch - 'a' + 1;//i是字母序数与字母对应
		for (j = 1; j <= i; j++) {
			printf(" ");
			for (k = 0; k < i - j; k++) {
				printf(" ");
			}
			n = 0;
			for (m = 1; m <= j; m++) {
				printf("%c", 'a' + n);
				n = n + 1;
			}
			if (n > 1) {
				for (int y = 1; y < n; y++) {
					printf("%c", 'a' + n - y - 1);
					x = x + 1;
				}
			}
			printf("\n");
		}
	}
	if ('A' <= ch && 'Z' >= ch) {
		i = ch - 'A' + 1;
		for (j = 1; j <= i; j++) {
			printf(" ");

			for (k = 0; k < i - j; k++) {
				printf(" ");
			}
			n = 0;
			for (m = 1; m <= j; m++) {
				printf("%c", 'A' + n);
				n = n + 1;
			}
			if (n > 1) {
				for (int y = 1; y < n; y++) {
					printf("%c", 'A' + n - y - 1);
					x = x + 1;
				}
			}
			printf("\n");

		}

	}
	return 0;
}

/*
为什么1是一个特殊情况？
是因为题目有病吗？（存疑）
因为这样写出来的代码正好堆到中间
如果1是
*/
