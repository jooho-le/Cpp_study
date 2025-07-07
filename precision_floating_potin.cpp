#include <iostream>	
#include <iomanip> 

using namespace std;

int main_precision_floating_point() {
	float float_value = 9.12341f;
	double double_value = 9.1234114512451;
	long double long_double_value = 9.123411451245112125145l;

	cout << "float: " << sizeof(float) << "bytes" << endl;
	cout << "float value: " << 
		setprecision(numeric_limits<float>::digits10 + 1) <<  // ��ȿ ���ڸ�ŭ ���е� ����
		float_value << endl << endl;  
	
	cout << "double : " << sizeof(double) << " bytes" << endl;
	cout << "double_value : " <<
		setprecision(numeric_limits<double>::digits10 + 1) <<  // ��ȿ ���ڸ�ŭ ���е� ����
		double_value << endl << endl;

	cout << "long double : " << sizeof(long double) << " bytes" << endl;
	cout << "long_double_value : " <<
		setprecision(numeric_limits<long double>::digits10 + 1) <<  // ��ȿ ���ڸ�ŭ ���е� ����
		long_double_value << endl << endl;

	return 0;
}