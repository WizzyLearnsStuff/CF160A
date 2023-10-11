#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;


	int coins[101] = {0};
	int s = 0;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		coins[b]++;
		s += b;
	}

	int taken = 0;
	int c = 0; 
	for (int i = 100; i >= 1 && taken <= s; i--) {
		if (coins[i] > 0) {
			coins[i]--;
			c++;
			s -= i;
			taken +=i;
			i++;
		}
	}

	cout << c;
}
