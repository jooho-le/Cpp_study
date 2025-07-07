#include <iostream>
#include <io.h>	
#include <fcntl.h>

using namespace std;	

int main_UNICODE() {
	wchar_t mesge_korean[] = L"안녕하세요, 세계!";
	wchar_t mesge_chinese[] = L"你好，世界!";
	
	cout << "hello world" << endl;

	_setmode(_fileno(stdout), _O_U16TEXT); // 윈도우 콘솔 창 유니코드 출력 모드 설정

	wcout << mesge_korean << endl; 
	wcout << mesge_chinese << endl;

	return 0;
}

