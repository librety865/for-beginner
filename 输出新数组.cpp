#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	int arr[10] = {1, 4, 6, 9, 11, 25, 31, 46, 83, 100};
	for (b = 0; b <= 9; b++) {
		if (a <= arr[b]) {
			printf("%d", a);
			printf(" ");
			break;
		} else {
			printf("%d", arr[b]);
			printf(" ");
		}
	}
	for (b; b <= 9; b++) {
		printf("%d", arr[b]);
		printf(" ");
	}
	if (a > arr[9])printf("%d", a);
	return 0;
}
