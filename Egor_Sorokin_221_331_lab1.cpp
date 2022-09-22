
#include <iostream>
#include <bitset>
#include <float.h>

using std::cout;
using std::endl;
using std::cin;
using std::bitset;
using std::hex;


int main() {
	setlocale(LC_ALL, "Rus");

	int x1, x2, numb, a, b;


	cout<<"Sorokin Egor Andreevich, 221-331"<< endl;

	cout<<"--------------------------------------------------------"<<endl;

	cout<<"min int = "<< int(0b10000000000000000000000000000000)<<", max int = "<< int(0b01111111111111111111111111111111)
		<<", size of int = "<<sizeof(int)<<endl;

	cout<<"min unsigned int = "<< unsigned(0b00000000000000000000000000000000)<<", max unsigned int = "<< unsigned(0b11111111111111111111111111111111)
		<<", size of unsigned int = "<<sizeof(unsigned int)<<endl;

	cout<<"min short = "<< short(0b1000000000000000)<<", max short = "<< short(0b0111111111111111)
		<<", size of short = "<<sizeof(short)<<endl;

	cout<<"min unsigned short = "<< unsigned(0b0000000000000000)<<", max unsigned short = "<< unsigned(0b1111111111111111)
		<<", size of unsigned short = "<<sizeof(unsigned short)<<endl;

	cout<<"min long = "<< long(0b1000000000000000000000000000000000000000000000000000000000000000)<<", max long = "<< long(0b0111111111111111111111111111111111111111111111111111111111111111)
		<<", size of long = "<<sizeof(long)<<endl;

	cout<<"min long long = "<< long (0b1000000000000000000000000000000000000000000000000000000000000000)<<", max long long = "<< long(0b0111111111111111111111111111111111111111111111111111111111111111)
		<<", size of long long = "<<sizeof(long long)<<endl;

	cout<<"min double = "<< -DBL_MAX <<", max double = "<< DBL_MAX
		<<", size of double = "<<sizeof(double)<<endl;

	cout<<"min char = "<< char(0b00000000)<<", max char = "<< char(0b11111111)
		<<", size of char = "<<sizeof(char)<<endl;

	cout<<"min bool = "<< bool(0b00000000)<<", max bool = "<< bool(0b11111111)
		<<", size of bool = "<<sizeof(bool)<<endl;

	cout<<"--------------------------------------------------------"<<endl;

	cout<<"Введите число: ";
	cin>>numb;
	cout<<"В бинарном виде "<< bitset<8 * sizeof(numb)>(numb) <<endl;
	cout<<"В шестнадцатиричном виде "<< hex << numb << endl;
	cout<<"bool "<<bool(numb)<<endl;
	cout<<"double "<<double(numb)<<endl;
	cout<<"char "<<char(numb)<<endl;

	cout<<"--------------------------------------------------------"<<endl;

	cout << "Введите коэффициенты a * x = b: ";
	cin >> a >> b;
	cout << a << " * x = " << b << endl;
	cout << "x = " << b << " / " << a << endl;
	cout << "x = " << b / a << endl;
	cout << "Ответ: " << (double) b / a << endl;

	cout<<"--------------------------------------------------------"<<endl;

	cout << "Введите координаты отрезка на прямой: "<< endl;
	cin >> x1 >> x2;
	cout << "Середина отрезка находится в точке с координатой " << (x1+x2) / 2. << endl;



	return 0;



}


