#include<iostream>

using namespace std;


bool isFactorial(int n)
{
	for (int i = 1;; i++) {
		if (n % i == 0) {
			n /= i;
		}
		else {
			break;
		}
	}

	if (n == 1) {
		return true;
	}
	else {
		return false;
	}
}

// Driver Code
int main()
{
	int n;
	cin>> n;

	bool ans = isFactorial(n);
	if (ans == 1) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	return 0;
}
