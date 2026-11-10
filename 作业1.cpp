#include<stdio.h>

int main() {
	int n, x, a;
	long long sum = 0;
	x = 1;
	scanf("%d%d", &a, &n);
	for (int i = 1; i <= n; i++) {
		if (i == 1)x = 1;
		if (i >= 2)x = x  * 10 + 1;
		sum += a*x;
	}
	printf("%d", sum);
	return 0;
}
