#include<iostream>
using namespace std;

int main() {
	char res;

	cout << "����� �����Դϱ�?\n";
	cout << "Y or N : "; cin >> res;
	
	if (res == 'y' || res == 'Y') {
		cout << "����� �����Դϴ�.";
	}
	else if (res == 'n' || res == 'N') {
		cout << "����� �����Դϴ�.";
	}
	else
		cout << "Y or N";
	
	return 0;
}