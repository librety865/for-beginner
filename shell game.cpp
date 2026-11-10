/*
Bomboslav likes to look out of the window in his room and watch lads outside playing famous shell game. The game is played by two persons: operator and player.
Operator takes three similar opaque shells and places a ball beneath one of them.
Then he shuffles the shells by swapping some pairs and the player has to guess the current position of the ball.

Bomboslav noticed that guys are not very inventive, so the operator always swaps the left shell with the middle one during odd moves (first, third, fifth, etc.) and always
swaps the middle shell with the right one during even moves (second, fourth, etc.).

Let's number shells from 0 to 2 from left to right.
Thus the left shell is assigned number 0, the middle shell is 1 and the right shell is 2.
Bomboslav has missed the moment when the ball was placed beneath the shell, but he knows that exactly n movements were made by the operator and the ball was under shell x at the end. Now he wonders, what was the initial position of the ball?
*/

/*
#include<stdio.h>
int main() {
	int a, b, x, n;
	scanf("%d", &n);
	scanf("%d", &x);
	for (int i = n; i >= 1; i--) {
		if (i % 2 == 0) {
			if (x == 1)x = 2;
			else {
				if (x == 0)x = 0;
				else {
					if (x == 2)x = 1;
				}
			}
		}
		if (i % 2 == 1) {
			if (x == 1)x = 0;
			else {
				if (x == 0)x = 1;
				else if (x == 2)x = 2;
			}
		}
	}
	printf("%d", x);
	return 0;
}
第一个问题
在这段前代码，是x的二次赋值问题，下次要严谨，再给同一个变量赋值的时候，要用if-else
第二个问题
超时，200000000
*/
#include<stdio.h>
int main() {
	int a, b, x, n;
	scanf("%d", &n);
	scanf("%d", &x);
	a = n % 6;
	if (n % 2 == 1) {
		if (x == 0) {
			switch (a) {
				case 1:
					b = 1;
					break;
				case 2:
					b = 2;
					break;
				case 3:
					b = 2;
					break;
				case 4:
					b = 1;
					break;
				case 5:
					b = 0;
					break;
				case 0:
					b = 0;
					break;
			}
		}
		if (x == 1) {
			switch (a) {
				case 1:
					b = 0;
					break;
				case 2:
					b = 0;
					break;
				case 3:
					b = 1;
					break;
				case 4:
					b = 2;
					break;
				case 5:
					b = 2;
					break;
				case 0:
					b = 1;
					break;
			}
		}
		if (x == 2) {
			switch (a) {
				case 1:
					b = 2;
					break;
				case 2:
					b = 1;
					break;
				case 3:
					b = 0;
					break;
				case 4:
					b = 0;
					break;
				case 5:
					b = 1;
					break;
				case 0:
					b = 2;
					break;
			}
		}
	}
	if (n % 2 == 0) {
		if (x == 0) {
			switch (a) {
				case 1:
					b = 0;
					break;
				case 2:
					b = 1;
					break;
				case 3:
					b = 2;
					break;
				case 4:
					b = 2;
					break;
				case 5:
					b = 1;
					break;
				case 0:
					b = 0;
					break;
			}
		}
		if (x == 1) {
			switch (a) {
				case 1:
					b = 2;
					break;
				case 2:
					b = 2;
					break;
				case 3:
					b = 1;
					break;
				case 4:
					b = 0;
					break;
				case 5:
					b = 0;
					break;
				case 0:
					b = 1;
					break;
			}
		}
		if (x == 2) {
			switch (a) {
				case 1:
					b = 1;
					break;
				case 2:
					b = 0;
					break;
				case 3:
					b = 0;
					break;
				case 4:
					b = 1;
					break;
				case 5:
					b = 2;
					break;
				case 0:
					b = 2;
					break;
			}
		}
	}
	printf("%d", b);
	return 0;
}
