#include <iostream>
#include <string>

int main()
{
	int age;
	char name[5];
	int number;
	std::cout << "나이를 입력하세요" << std::endl;
	std::cin >> age;

	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> name;

	std::cout << "번호를 입력하세요" << std::endl;
	std::cin >> number;

	std::cout << "나이" << age << "이름" << name << "번호" << number << std::endl;

	return 0;
}
//std 는 네임스페이스 라고 하며 개념상 소속이다 
//::은 범위 지정 연산자,스코프 설정 연산자 이다
//c 언어에서 printf의 기능은 (cout),(endl); 이 담당한다
//여기서 endl은 \n같은 개행역할과 출력스크림을 모두 내보내는 역할을 한다
//c언어서의 scanf 즉 입력을 담당하는 명령어는 cin이다 
//cin>>  으로 실행한다
