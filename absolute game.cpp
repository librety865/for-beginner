#include<stdio.h>
int main() {
	int arra[1000];
	int arrb[1000];
	int i, a, b, c, n, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arra[i]);
		printf(" ");//TODO
	}
	for (int a = 0; a < n; a++) {
		scanf("%d", &arrb[a]);
		printf(" ");//TODO
	}
	for (int i = 0; i <= 0; i++) {
		x = arra[i];
		for (int j = 0; j < n; j++) {
			y = arrb[j]; //TODO
			b = y - x;
			if (b >= 0) {
				c = b; //TODO
			}
		}
	}
	if (n == 1) {
		if (x > y)printf("%d", x - y);
		if (y > x)printf("%d", y - x);
		if (x == y)printf("0");
	}

	return 0;
}




/*
没学过怎么从数组中删一个数。
*/
