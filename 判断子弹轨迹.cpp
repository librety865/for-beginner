#include<stdio.h>
#include<math.h>
int main() {
	double vx, vy, alpha;
	double t1, t2, x1, x2, h1, h2, t, h, rad;
	double h0 = 0.55, distance = 3.00;
	scanf("%lf", &alpha);
	rad = alpha * 3.1415926535 / 180.0;
	vx = 15.00 * cos(rad);
	vy = 15.00 * sin(rad);
	if (alpha >= 0 && alpha <= 90) {
		t1 = vy / 9.80;
		x1 = vx*t1;
		x2 = distance - x1;
		t2 = x2 / vx;
		h1 = h0 + 0.5 * 9.80 * t1*t1;
		h2 = h1 - 0.5 * 9.80 * t2*t2;
		if (h2 <= 0.43 && h2 >= 0.37) {
			printf("能击打到装甲板");
		} else {
			printf("未击中");
		}
		printf("%f", h2);
	}
	if (alpha <= 0 && alpha >= -90) {
		vy = -vy;
		t = 3.00 / vx;
		h = h0 - vy*t - 0.5 * 9.80 * t*t;
		if (h2 <= 0.43 && h2 >= 0.37) {
			printf("能击打到装甲板");
		} else {
			printf("未击中");
		}
		printf("%f", h);
	}
	return 0;
}


/*
体会到了定义变量的便捷性
*/
