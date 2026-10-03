#include<stdio.h>
int main() {
	int num = 5;
	int *p = &num;
	*p = 10;
	printf("%d", *p);
	return 0;
}
