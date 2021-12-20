#include<iostream>
using namespace std;

int main() {
	int a, b;

	cout << "정수 2개를 입력하세요 : "; cin >> a >> b;

	if (a == b)
		cout << "두 숫자가 같습니다.";
	else if (a > b)
		cout << a << "보다 " << b << "가 작습니다";
	else
		cout << a << "보다 " << b << "가 큽니다";


	return 0;
}