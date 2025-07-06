#include <iostream>	
using namespace std;

int main() {
	cout << "아스키 코드 출력 [32-126]" << endl;

	for (char i = 32; i <= 126; i++) { // 아스키코드가 7bit 형태 체계를 따르고 있어 char 사용 
		cout << i << ((i % 16 == 15) ? '\n' : ' ');
	}
	
	return 0;
}