#include<iostream>
using namespace std;

int main() {
	int a, b;

	cout << "���� 2���� �Է��ϼ��� : "; cin >> a >> b;

	if (a == b)
		cout << "�� ���ڰ� �����ϴ�.";
	else if (a > b)
		cout << a << "���� " << b << "�� �۽��ϴ�";
	else
		cout << a << "���� " << b << "�� Ů�ϴ�";


	return 0;
}