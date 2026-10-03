#include<stdio.h>
int getMax(int a, int b) {
	int max;
	if (a >= b) {

		if (a > b) {
			printf("%d", a);
		} else {
			printf("两数相等");
		}
		max = a; //TODO
	} else {
		printf("%d", b);
		max = b;
	}

	return max;
}

void printStar(	int max) {

	int i = 0;
	printf("\n");
	for ( i = 0; i <= max; i++) {
		printf("*");//TODO
	}
}



int main() {
	int a, b;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	int max =  getMax( a, b);
	printStar(max);
	return 0;
}
