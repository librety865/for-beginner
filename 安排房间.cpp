/*
凤家有 n 个房间排成一排，依次编号为 1,2,⋯,n。每个房间有一个占用状态 ai。
ai=0 表示 i 号房间未被占用，ai=1 表示 i 号房间被占用。
凤家经常需要接待客人，并且需要给客人安排一个房间。客人有自己想要被安排的房间编号 k。如果 k 号房间没有被占用，即 ak=0，那么凤就会将客人安排到 k 号房间；
否则，凤会将客人安排到 编号最小且未被占用的 房间。
现在需要接待一个新的客人，请你判断出凤会将这个客人安排到哪个编号的房间。
*/
#include<iostream>
using namespace std;
int n, k;
int arr[105];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;
	if (arr[k - 1] == 1) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				cout << i + 1;
				return 0;
			}
		}
	}
	if (arr[k - 1] == 0)cout << k;
	return 0;
}
