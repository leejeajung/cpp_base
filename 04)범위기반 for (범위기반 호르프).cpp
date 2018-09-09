#include <iostream>

int main()
{
	int ctest[5] = { 3,34,2,3,5 };

	//c 언어에서의 for
	for (int i = 0; i < 5; i++)
		std::cout << ctest[i] << ' ';
	std::cout << std::endl;

	//c++ 에서의 범위기반 for
	//값을 읽음
	for (auto n : ctest)
		std::cout << n << ' ';
	std::cout << std::endl;
	//출력
	for (auto &n : ctest)
		std::cout << n << ' ';
	std::cout << std::endl;

}
//기존의 for 문은 값이바뀌면 for문의 값도 변경해주어야했지만 
//범위기반 for 문은 값이 자동으로 바뀌어서 실수 와 버그를 줄일수있다
//n이 배열하나하나에 접근해 값을 가져오는 방식
