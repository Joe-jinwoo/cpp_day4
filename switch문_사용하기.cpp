#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "������ �Է��ϼ��� : "; cin >> res;

	switch (res) {
	case 1:
		cout << "1�� �Էµ�";
		break;
	case 2:
		cout << "2�� �Էµ�";
		break;
	default:
		cout << "¥�ٸ��� �Էµ�";
	}

	return 0;
}