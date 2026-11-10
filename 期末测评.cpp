/*
某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，获取的条件各自不同：

院士奖学金，每人 8000 元，期末平均成绩高于 80 分（>80），并且在本学期内发表 1 篇或 1 篇以上论文的学生均可获得；
五四奖学金，每人 4000 元，期末平均成绩高于 85 分（>85），并且班级评议成绩高于 80 分（>80）的学生均可获得；
成绩优秀奖，每人 2000 元，期末平均成绩高于 90 分（>90）的学生均可获得；
西部奖学金，每人 1000 元，期末平均成绩高于 85 分（>85）的西部省份学生均可获得；
班级贡献奖，每人 850 元，班级评议成绩高于 80 分（>80）的学生干部均可获得；
只要符合条件就可以得奖，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。
例如姚林的期末平均成绩是 87 分，班级评议成绩 82 分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级贡献奖，奖金总数是 4850 元。

现在给出若干学生的相关数据，请计算哪些同学获得的奖金总数最高（假设总有同学能满足获得奖学金的条件）。
*/
#include<iostream>
#include<algorithm>
using namespace std;
int n, i;
int sum[105];
int max_sum = -1;
string name;
string max_name;
int average_point[105];
int class_point[105];
char west;
char guan;
int num;
int sum_sum;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> i;
	int n = 1;
	while (n <= i) {
		cin >> name >> average_point[n] >> class_point[n] >> guan >> west >> num;
		if (average_point[n] > 80 && num > 0) {
			sum[n] += 8000;
		}
		if (average_point[n] > 85 && class_point[n] > 80) {
			sum[n] += 4000;
		}
		if (average_point[n] > 90) {
			sum[n] += 2000;
		}
		if (average_point[n] > 85 && west == 'Y') {
			sum[n] += 1000;
		}
		if (class_point[n] > 80 && guan == 'Y') {
			sum[n] += 850;
		}
		sum_sum += sum[n];
		if (sum[n] > max_sum) {
			max_sum = sum[n];
			max_name = name;
		}
		n++;
	}
	cout << max_name << "\n" << max_sum << "\n" << sum_sum;
	return 0;
}
