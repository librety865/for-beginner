/*Monocarp runs a company. Consider the work of his company over the next k months.
In the first month, the company has x employees, not counting Monocarp himself, and y projects need to be completed.
In each next month, both the number of employees and the number of projects increase by 1.

In other words, in month i (0 ≤ i < k), the company has x+i employees and needs to complete y+i projects.

In each month, Monocarp distributes the projects among the employees.
Each employee must receive the same number of projects, and each project can be assigned to at most one employee.
Monocarp completes all unassigned projects himself. He always chooses a distribution that makes him complete as few projects as possible.

In particular, if in some month there are a employees and b projects, then Monocarp assigns exactly floor(b / a) projects to each employee, and he completes b mod a projects himself.

Find the total numberl of projects that Monocarp will complete himself over the next k months.
*/


#include<stdio.h>
long long  sum, x, y, z, temp;
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		sum = 0;
		scanf("%lld%lld%lld", &x, &y, &z);
		for (long long i = 1; i <= z; i++) {
			if (x <= y / 2) {
				temp = y % x;
				sum += temp;
				x++;
				y++;
				continue;
			}
			if (x > y / 2) {
				temp = y % x;
				sum += temp*(z - i + 1);
				break;
			}
		}
		printf("%lld", sum);
		printf("\n");
	}
	return 0;
}

/*#include<stdio.h>

int main() {
int t;
scanf("%d", &t);
long long x, y, z, k, temp;

while (t > 0) {
z = 0;
scanf("%lld%lld%lld", &x, &y, &k);
for (int i = 1; i <= k; i++) {
temp = y % x ;
x++;
y++;
z = temp + z;
}
printf("%lld\n", z);
t--;
}
return 0;
}*/

