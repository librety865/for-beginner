/*
请你找出 M 个和为 N 的正整数，他们的乘积要尽可能的大。
输出字典序最小的一种方案。
*/

#include<iostream>
using namespace std;

int arr[1000050];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int M, N;
	cin >> N >> M;
	int num = 0;
	if (N % M == 0) {
		for (int i = 1; i <= M; i++) {
			cout << N / M << " ";
		}
	} else {
		for (int i = 1; i <= M ; i++) {
			arr[i] = N / M;
			num += arr[i];
		}
		for (int i = M; i > M - (N - num); i--) {
			arr[i] += 1;
		}
		for (int i = 1; i <= M; i++) {
			cout << arr[i] << " ";
		}
	}
	return 0;
}

/*if (N % M == 0) {
for (int i = 1; i <= M; i++) {
cout << N / M << " ";
}
} else {
if (N - N / M * (M - 1) <  M) {
for (int i = 1; i < M; i++) {
cout << N / M << " ";
}
cout << N - N / M*(M - 1);
} else {
for (int i = 1; i < M - 1; i++) {
cout << N / M + 1 << " ";
}
for (int i = 0; i <= 1; i++) {
cout << (N - (N / M + 1) * (M - 1) + N / M + 1) / 2;
}

}

}*/
