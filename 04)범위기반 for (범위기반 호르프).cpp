#include <iostream>

int main()
{
	int ctest[5] = { 3,34,2,3,5 };

	//c ������ for
	for (int i = 0; i < 5; i++)
		std::cout << ctest[i] << ' ';
	std::cout << std::endl;

	//c++ ������ ������� for
	//���� ����
	for (auto n : ctest)
		std::cout << n << ' ';
	std::cout << std::endl;
	//���
	for (auto &n : ctest)
		std::cout << n << ' ';
	std::cout << std::endl;

}
//������ for ���� ���̹ٲ�� for���� ���� �������־�������� 
//������� for ���� ���� �ڵ����� �ٲ� �Ǽ� �� ���׸� ���ϼ��ִ�
//n�� �迭�ϳ��ϳ��� ������ ���� �������� ���
