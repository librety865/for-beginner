#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[10] = {111, 55, 12, 45, 548, 48, 584, 84, 8, 48};
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}


}
