#include <iostream>
int add(int a, int b, int c)
{
	std::cout << "int 3�� add ����"<< std::endl;
	return a + b + c;
}
int add(int a, int b)
{
	std::cout << "int 2�� add ����" << std::endl;
	return a + b;
}
double add(double a, double b)
{
	std::cout << "double�� add ����" << std::endl;
	return a + b;
}
int main()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3, 4,5) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;

}
//�������Ǵ� �ϳ�(�Լ��̸�, �����̸���)�� �����ǹ̸� ���ÿ� ���°��� ���մϴ�
//�����ε��̶�� �ϰų� �����ؼ� �������� ����մϴ�
//c ������ �����̸��� �Լ��������Ҽ������� c++������ �̸��� ������ �Լ� ���ٸ��� �ٸ��Լ��� �˴ϴ�
