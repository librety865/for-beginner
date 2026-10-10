/*
定义int变量a=10，定义指针p保存a的地址。
利用指针p修改a的值为20，然后分别打印a、*p的值。
输出样例：
a = 20
*p = 20
*/
#include<stdio.h>
int main() {
	int a,*p;
	a = 10;
	p = &a;
	*p = 20;
	printf("%d", a);
	printf("%d", *p);
	return 0;





}
