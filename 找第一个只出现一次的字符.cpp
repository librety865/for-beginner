#include<stdio.h>
int main() {
	char arr[1105];
	char ch, sh;
	int i, count[26] = {0};
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++) {
		count[arr[i] - 'a']++;
	}
	for (int i = 0; arr[i]; i++) {
		if (count[arr[i] - 'a'] == 1) {
			printf("%c", arr[i]);
			return 0;
		}//TODO
	}
	printf("no");
	return 0;
}



/*
问题一：如何输入字符串？
详见上
问题二：字符串用scanf没有\0怎么办？
scanf会自动输入
嘻哈查找
*/
