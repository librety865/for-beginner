#include<stdio.h>
#include<math.h>
int main() {
	int n, i, j;
	printf("输入一个不多于5位的正整数n:");
	printf("\n");
	scanf("%d", &n);
	if (n >= 10000 && n < 100000) {
		printf("位数：5");
		printf("\n");
		printf("正序：%d", n);
		printf("\n");
		printf("反序：");
		for (j = 1; j <= 5; j++) {
			i = n % 10;
			n = n / 10;
			printf("%d", i);
		}
	}
	if (n >= 1000 && n < 10000) {
		printf("位数：4");
		printf("\n");
		printf("正序：%d", n);
		printf("\n");
		printf("反序：");
		for (j = 1; j <= 4; j++) {
			i = n % (int)10;
			n = n / 10;
			printf("%d", i);
		}
	}
	if (n >= 100 && n < 1000) {
		printf("位数：3");
		printf("\n");
		printf("正序：%d", n);
		printf("\n");
		printf("反序：");
		for (j = 1; j <= 3; j++) {
			i = n % (int)10;
			n =	n / 10;
			printf("%d", i);
		}
	}
	if (n >= 10 && n < 100) {
		printf("位数：2");
		printf("\n");
		printf("正序：%d", n);
		printf("\n");
		printf("反序：");
		for (j = 1; j <= 2; j++) {
			i = n % (int)10;
			printf("%d", i);
			n =	n / 10;
		}
		if (i == 1)printf("反序：%d", j);
		else printf("%d", j);
	}
	if (n < 10 && n >= 1 ) {
		printf("\n位数：1");
		printf("\n");
		printf("正序：%d", n);
		printf("\n");
		printf("反序：");
		printf("%d", n);
	}
	if (n <= 0 || n >= 100000)printf("数据输入错误！");//这行代码有问题，想一想错在了哪
	return 0;
}

/*
因为n 的值被改变了，改变后的n满足条件，所以反复输出"数据输入错误！"
how解决这个问题？
要么定义一个临时变量temp，使循环前后的n大小不变
要么把第66行提到最上面
推荐使用第一种方法，原因有二：
1.这是一个良好的习惯，肯定解决的不止这一类问题
2.不用额外考虑顺序
*/
