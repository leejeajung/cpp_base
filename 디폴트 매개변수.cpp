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
	//ȣ���ڰ� ���μ��� ������� ������ ����Ʈ ���� �����Ѵ�
	std::cout << testparam() << std::endl;
	//���μ��� ����Ͽ����Ƿ� ����Ʈ ���� �����Ѵ�
	std::cout << testparam(20) << std::endl;

	std::cout << testnparam(10) << std::endl;
	std::cout << testnparam(10,5) << std::endl;

}
//�ű⺯���� ����Ʈ ���� ������ �Լ��� ȣ���� �ڵ忡�� ���μ��� ������ä ȣ���Ҽ��ֽ��ϴ�
//������
//�Ű������� ����Ʈ ���� �ݵ�� ������ �Ű��������� ����ϰ� �߰��� �������� �ȵ�
//����Ʈ���� ���� �Ű��������� �ݵ�� ȣ���� �Լ��� ���μ��� ����ؾ���