#include <iostream>
using namespace std;

long long int split(int [], int, int);
int arr[1000001];
int main() {
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N; // N은 2 ~ 1,000,000 사이의 자연수
		
		
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
		}

		cout << "#" << i << " " << split(arr, 0, N) << "\n";
	}

	return 0;
}

long long int split(int arr[], int start, int end) {
	if (start == end) {
		return 0;
	}
	else {
		long long int sum = 0;
		int max = -1, index = 0;

		for (int j = start; j < end; j++) {
			if (max < arr[j]) {
				max = arr[j];
				index = j;
			}
		}

		if (index == 0) {
			return split(arr, start + 1, end);
		}
		else {
			for (int i = start; i < index; i++) {
				sum += (arr[index] - arr[i]);
			}
			return sum + split(arr, index + 1, end);
		}
	}
}