#include<stdio.h>
int main() {
	int n, k, a = 0;
	double m, s = 0;
	scanf("%d", &n);
	for (k = 1; k <= n; k++) {
		a = k + a;
		m = 1.000 / a;
		s = s + m;
	}
	printf("%f", s);
	return 0;
}

