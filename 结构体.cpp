#include<stdio.h>
struct book {

	float price;
	int page;

};


int main() {
	struct book a {
		9.8, 320
	};
	printf("%.2f\n%d",  a.price, a.page);
	struct book b {
		9.8, 320
	};
	printf("%.2f\n%d",  b.price, b.page);
	struct book c {
		9.8, 320
	};
	printf("%.2f\n%d",  c.price, c.page);
	return 0;
}
