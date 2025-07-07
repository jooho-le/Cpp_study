#include <iostream>

using namespace std;	

void print() {
	int value = 10; // 지역 변수로 선언
	cout << "print 함수 지역 변수 value: " << value << endl;
}

int main_local_variable() {
	int value = 20; // main 함수의 지역 변수로 선언
	cout << "main 함수 지역 변수 value: " << value << endl;

	print(); // print 함수 호출
	
	cout << "main 함수 지역 변수 value: " << value << endl; // main 함수의 지역 변수 출력
	
	return 0;
}