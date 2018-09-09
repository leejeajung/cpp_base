#include <iostream>
int testparam(int nparam = 10)
{
	return nparam;
}
int testnparam(int nparam1,int nparam2=2)
{
	return nparam1 * nparam2;
}
int main()
{
	//호출자가 실인수를 기술하지 않으면 디폴트 값을 적용한다
	std::cout << testparam() << std::endl;
	//실인수를 기술하였으므로 디폴트 값을 무시한다
	std::cout << testparam(20) << std::endl;

	std::cout << testnparam(10) << std::endl;
	std::cout << testnparam(10,5) << std::endl;

}
//매기변수의 디폴트 값으 선언한 함수는 호출자 코드에서 실인수를 생략한채 호출할수있습니다
//주의점
//매개변수의 디폴트 값은 반드시 오른쪽 매개변수부터 기술하고 중간에 빼먹으면 안됨
//디폴트값이 없는 매개변수에는 반드시 호출자 함수에 실인수를 기술해야함