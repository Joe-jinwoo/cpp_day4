#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "정수를 입력 : "; cin >> n;

	if (n % 2 == 0)
		cout << n << "은(는) 짝수입니다.";
	else
		cout << n << "은(는) 홀수입니다.";



	return 0;
}