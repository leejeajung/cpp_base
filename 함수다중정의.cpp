#include <iostream>
int add(int a, int b, int c)
{
	std::cout << "int 3개 add 실행"<< std::endl;
	return a + b + c;
}
int add(int a, int b)
{
	std::cout << "int 2개 add 실행" << std::endl;
	return a + b;
}
double add(double a, double b)
{
	std::cout << "double형 add 실행" << std::endl;
	return a + b;
}
int main()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3, 4,5) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;

}
//다중정의는 하나(함수이름, 변수이름등)이 여러의미를 동시에 갖는것을 말합니다
//오버로딩이라고 하거나 번역해서 다중정의 라고합니다
//c 언어에서는 같은이름의 함수가존재할수없지만 c++에서는 이름이 같더라도 함수 가다르면 다른함수가 됩니다
