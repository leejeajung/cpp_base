#include <iostream>
#include <string>

int main()
{
	int age;
	char name[5];
	int number;
	std::cout << "���̸� �Է��ϼ���" << std::endl;
	std::cin >> age;

	std::cout << "�̸��� �Է��ϼ���" << std::endl;
	std::cin >> name;

	std::cout << "��ȣ�� �Է��ϼ���" << std::endl;
	std::cin >> number;

	std::cout << "����" << age << "�̸�" << name << "��ȣ" << number << std::endl;

	return 0;
}
//std �� ���ӽ����̽� ��� �ϸ� ����� �Ҽ��̴� 
//::�� ���� ���� ������,������ ���� ������ �̴�
//c ���� printf�� ����� (cout),(endl); �� ����Ѵ�
//���⼭ endl�� \n���� ���࿪�Ұ� ��½�ũ���� ��� �������� ������ �Ѵ�
//c���� scanf �� �Է��� ����ϴ� ��ɾ�� cin�̴� 
//cin>>  ���� �����Ѵ�
