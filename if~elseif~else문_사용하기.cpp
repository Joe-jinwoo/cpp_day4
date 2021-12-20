#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "정수를 입력하세요 : "; cin >> res;
	
	if (res == 1)
		cout << "1이 입력됨\n";
	else if (res == 2)
		cout << "2가 입력된\n";
	else
		cout << "짜바리가 입력됨\n";

	return 0;
}