#include<stdio.h>
int main() {
	int a, b;
	float  c;
	char op;
	printf("请输入一个表达式：");
	printf("\n");
	scanf("%d%c%d", &a, &op, &b);
	switch (op) {
		case '+':
			c = a + b;
			printf("%d+%d=%.0f", a, b, c);
			break;
		case '-':
			c = a - b;
			printf("%d-%d=%.0f", a, b, c);
			break;
		case '*':
			c = a*b;
			printf("%d*%d=%.0f", a, b, c);
			break;
		case '/':
			c = (float)a / (float)b;
			printf("%d/%d=%.1f", a, b, c);
			break;
	}
	return 0;
}
/*
为什么无法输出？
*/
