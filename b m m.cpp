#include<iostream>
using namespace std;

int main()
{
	int a, b, max, min, r = 1;
	cout << "please enter two numbers:";
	cout << "\n\n" << "number1=";
	cin >> a;
	cout << "\n" << "number2=";
	cin >> b;
	max = a;
	min = b;
	while (r != 0)
	{
		r = (max % min);
		max = min;
		min = r;
	}
	cout << "\n\n" << "B.M.M of " << a << ',' << b << " is:" << max;
	cout << "\n\n\n" << "press any key to exit...";
	return 0;
}
