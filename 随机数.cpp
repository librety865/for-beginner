#include<stdio.h>
#include<stdlib.h>
int main() {
	srand(10);
	int num1 = rand();
	printf("%d", num1);
	return 0;
}

/*
srand只是一个种子（也就是伪随机数），生成一个很长（几乎无穷）的固定序列
srand生成的值，每有一个rand就调用一个
注意头文件<stdlib.h>
*/
