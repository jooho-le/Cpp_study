#include <iostream>	
using namespace std;

int main() {
	cout << "�ƽ�Ű �ڵ� ��� [32-126]" << endl;

	for (char i = 32; i <= 126; i++) { // �ƽ�Ű�ڵ尡 7bit ���� ü�踦 ������ �־� char ��� 
		cout << i << ((i % 16 == 15) ? '\n' : ' ');
	}
	
	return 0;
}