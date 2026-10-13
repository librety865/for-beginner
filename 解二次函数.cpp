#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c, x, x1, x2;
	float delta;
	printf("请输入方程的系数a,b,c的值：");

	scanf("%f,%f,%f", &a, &b, &c);
	if (a == 0) {
		x = -c / b;
		if (a == 0.00 && b != 0.00) {
			printf("\n此方程是一个一元一次方程，其解为x=%.2f", x);
		}
		if (a == 0.00 && b == 0.00) {
			printf("\n这不是一个方程。");
		}
	} else {
		delta = b*b - 4.00 * a*c;
		if (delta < 0.00) {
			printf("\n此方程是一个一元二次方程，无实根。");
		}
		if (delta == 0.00) {
			x1 = ((-b + sqrt(delta)) / (2.00 * a));
			x2 = ((-b - sqrt(delta)) / (2.00 * a));
			printf("\n此方程是一个一元二次方程，有2个相同的根:");
			printf("\n");
			printf("x1=x2=%.2f", x1);
		}
		if (delta > 0.00) {
			x1 = ((-b + sqrt(delta)) / (2.00 * a));
			x2 = ((-b - sqrt(delta)) / (2.00 * a));
			printf("\n此方程是一个一元二次方程，有2个不同的根:");
			printf("\n");
			printf("x1=%.2f, x2=%.2f", x1, x2);
		}
	}
	return 0;
}
/*
反思：1.为什么在敲了一个月后还会犯低级错误？？？
	要仔细要严谨，这个话太空洞了，那就具体一点，今天定义了float变量，下次就要注意scanf,printf里面写%f
	2.要注意代码出现的顺序
      比如你一开始
x = -c / b;
x1 = (-b + sqrt(delta));
x2 = (-b - sqrt(delta));
        这几个公式在外面，导致报错
	3.如果scanf中加了逗号，就要在输入的时候也加逗号
	例如：
		scanf("%f,%f,%f", &a, &b, &c);
		输入：1，2，3
*/
