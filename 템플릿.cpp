
#include <iostream>


template<typename T>
T TestFunc(T a)
{
	std::cout << "매개변수 a:" << a << std::endl;
	return a;
}

int main()
{
	std::cout << TestFunc(3)<< std::endl;
	std::cout << TestFunc(3.3) << std::endl;
	std::cout << TestFunc('a') << std::endl;
	std::cout << TestFunc("TestString") << std::endl;
	

}
//다중정의는 유용하지만 제작자는 같은 일을 여러번 반복해야합니다 이런문제점을 해결하기위하여 템플릿을 사용합니다
//template<typename T>
//반환형식 함수이름<매개변수>
//{
//}
//으로사용합니다