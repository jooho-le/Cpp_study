#include <iostream>
// using namespace std; // 네임스페이스 사용 선언 하면 아래 std:: 안붙여도 사용 가능 

int main_input_output() {
	int i, j;

	std::cout << "enter num_1 : ";
	std::cin >> i;

	std::cout << "enter num_2 : ";
	std::cin >> j;

	std::cout << "num_1 + num_2 = " << i + j << std::endl;

	return 0;
}



