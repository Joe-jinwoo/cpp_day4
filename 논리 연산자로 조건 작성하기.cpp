#include<iostream>
using namespace std;

int main() {
	char res;

	cout << "당신은 남성입니까?\n";
	cout << "Y or N : "; cin >> res;
	
	if (res == 'y' || res == 'Y') {
		cout << "당신은 남성입니다.";
	}
	else if (res == 'n' || res == 'N') {
		cout << "당신은 여성입니다.";
	}
	else
		cout << "Y or N";
	
	return 0;
}