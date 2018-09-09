#include <iostream>
//메모리 동적할당
int main()
{
	int *ptr = new int{ 10 };           //new 로  동적할당
	int *ptr2 = new int;

	*ptr2 = 20;

	std::cout << *ptr << std::endl;
	std::cout << *ptr2 << std::endl;
	delete ptr;							//delete 로  해제
	delete ptr2;
	ptr = nullptr;                     //댕글링 포인터를 막기위하여 nullptr을 가리키게함
	ptr2 = nullptr;

}
//new 와 delete연산자 는 객체를 동적할당하고 해제하는 연산자 입니다 
//new 연산자는 malloc 과 다르게 메모리 크기를 정하지 않습니다
//int 후 중괄호는 유니폼초기화로서 초기화시 에만 사용가능하고 에러 가나는 것을 미리막아주는 역할을합니다
//delete는 동적할당을 해제하는 연산자입니다
//delete 변수명 으로 사용합니다
//뎅글링 포인터를 막기위해서 ptr =nullptr을해준다
//뎅글링 포인터는 delete 해서 할당한 영역을해제를해줘도 포인터변수는 계속 동적할당해준영역을 가리키는 현상을말합니다
// 이것은 추후에 문제를 일으킬수있으므로 반드시 포인터 를 nullptr으로 가르키게해줘야합니다