#include <iostream>

using namespace std;	

void print() {
	int value = 10; // ���� ������ ����
	cout << "print �Լ� ���� ���� value: " << value << endl;
}

int main_local_variable() {
	int value = 20; // main �Լ��� ���� ������ ����
	cout << "main �Լ� ���� ���� value: " << value << endl;

	print(); // print �Լ� ȣ��
	
	cout << "main �Լ� ���� ���� value: " << value << endl; // main �Լ��� ���� ���� ���
	
	return 0;
}