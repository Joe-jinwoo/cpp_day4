#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "정수를 입력하세요 : "; cin >> res;

	switch (res) {
	case 1:
		cout << "1이 입력됨";
		break;
	case 2:
		cout << "2가 입력됨";
		break;
	default:
		cout << "짜바리가 입력됨";
	}

	return 0;
}