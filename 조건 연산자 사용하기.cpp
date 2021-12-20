#include<iostream>
using namespace std;

int main() {
	int res;
	char ans;

	cout << "정수를 입력하세요 : "; cin >> res;

	ans = (res == 1) ? 'A' : 'B';

	cout << ans << "코스를 선택하였습니다";
	return 0;
}