#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int N;
	cin >> N; // N은 10 ~ 1000의 정수
	
	for (int i = 1; i <= N; i++) {
		int count = 0;
		if (i < 10) {
			if ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9) {
				++count;
			}
		}
		else if (i >= 10 && i < 100) {
			if ((i / 10) == 3 || (i / 10) == 6 || (i / 10) == 9) {
				++count;
			}

			if ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9) {
				++count;
			}
		}
		else {
			int temp = i % 100;
			if ((i / 100) == 3 || (i / 100) == 6 || (i / 100) == 9) {
				++count;
			}

			if ((temp / 10) == 3 || (temp / 10) == 6 || (temp / 10) == 9) {
				++count;
			}

			if ((temp % 10) == 3 || (temp % 10) == 6 || (temp % 10) == 9) {
				++count;
			}
		}

		if (count == 0) {
			cout << i;
		}
		else if (count == 1) {
			cout << "-";
		}
		else if (count == 2) {
			cout << "--";
		}
		else {
			cout << "---";
		}
		cout << " ";
	}
	cout << "\n";

	return 0;
}