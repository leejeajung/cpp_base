
#include <iostream>


template<typename T>
T TestFunc(T a)
{
	std::cout << "�Ű����� a:" << a << std::endl;
	return a;
}

int main()
{
	std::cout << TestFunc(3)<< std::endl;
	std::cout << TestFunc(3.3) << std::endl;
	std::cout << TestFunc('a') << std::endl;
	std::cout << TestFunc("TestString") << std::endl;
	

}
//�������Ǵ� ���������� �����ڴ� ���� ���� ������ �ݺ��ؾ��մϴ� �̷��������� �ذ��ϱ����Ͽ� ���ø��� ����մϴ�
//template<typename T>
//��ȯ���� �Լ��̸�<�Ű�����>
//{
//}
//���λ���մϴ�