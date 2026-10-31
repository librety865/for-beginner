/*津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。、
另外每天妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，而且上得越久就会越不高兴。

这次与 NOIp2004 普及组第一题不同的是：假设津津不会因为其它事不高兴，但是她的不高兴会（当然高兴也会）持续到第二天。
请你帮忙检查一下津津以后 n 天的日程安排，看看以后 n 天她会不会不高兴（计算方法：用昨天不高兴程度加上今天上课总时间减去 8 后得到的数作为今天不高兴程度）；
输出以后 n 天结束后不高兴程度和是多少。*/
#include<iostream>
using namespace std;
int n, x, y;
int b;
int a;
int sum[3010];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum[i] = a + b;
	}
	for (int i = 0; i < n; i++) {
		x =  sum[i] - 8;
		sum[i + 1] -= x;
		if (x > 0)y += x;
	}
	cout << y;
	return 0;
}
