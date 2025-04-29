#include<iostream>
using namespace std;

int main() {
	double num1, num2;
	char op;

	cout << "enter the value:";
	cin >> num1;
	cout << "enter operator(+,-,*,/,%):";
	cin >> op;
	cout << "enter the second number:";
	cin >> num2;
		switch (op)
		{
		case'+':
			cout << "result:" << num1 + num2<<endl;
			break;
		case'-':
			cout << "result:" << num1 - num2<<endl;
			break;
		case'*':
			cout << "result:" << num1 * num2<<endl;
			break;
		case'/':
			if (num2 != 0) {
				cout << "result:" << num1 / num2<<endl;
			}
			else {
				cout << "error: devide by zero!";
			}
			break;
		case'%':
			if (num2 < num1) {
				cout << "error percentage!" << endl;
			}
			else {
				cout << "result:" << num1 / num2 * 100 << endl;
			}
			break;
		default:
			cout << "invalid operator" << endl;
			break;
		}
		return 0;
}