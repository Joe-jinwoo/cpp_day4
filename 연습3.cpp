#include<iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	switch (a) {
	case 1:
		cout << "성적은 1입니다. 노력하세요.";
		break;
	case 2:
		cout << "성적은 2입니다. 조금 더 노력하세요.";
		break;
	case 3:
		cout << "성적은 3입니다.";
		break;
	case 4:
		cout << "성적은 4입니다.";
		break;
	case 5:
		cout << "성적은 5입니다.";
	}
	return 0;
}