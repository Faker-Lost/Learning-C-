#include<iostream>
#include<functional>
using namespace std;
//��ͨ����
void show1()
{
	cout << "����һֻСС��" << endl;
}
//��ͨ��������
void show2(const string& message)
{
	cout << message << " ������һֻСС��" << endl;
}
//��ķǾ�̬��Ա����
struct AA
{
	void show3(int bh, const string& message)
	{
		cout << "bh:" << bh << "  message:" << message << " ����һֻСС��" << endl;
	}
};
//��ľ�̬��Ա����
struct BB
{
	static void show4(int bh, const string& message)
	{
		cout << "bh:" << bh << "  message:" << message << " ����һֻСС��" << endl;
	}
};
//ģ�庯�� 1.�ɵ��ö��� 2.�ɱ������
template<typename Func,typename ...Args>
auto show(Func fun, Args ...args)
{
	cout << "׼������..." << endl;

	auto f = bind(fun, args...);
	f();

	cout << "�������..." << endl;

	return f;
}
int main()
{
	//��ͨ����
	show(show1);
	//�вκ���
	show(show2, "����һ��");
	//��ķǾ�̬��Ա����
	AA aa;
	show(&AA::show3, &aa, 3, "��������");
	//��ľ�̬��Ա����
	BB bb;
	show(BB::show4, 4, "��������");
	//lambda ����
	auto f = [](int bh, const string& message)
		{
			cout << "bh:" << bh << "  message:" << message << " ����һֻСС��" << endl;
		};
	show(f, 5, "�����ĺ�");

	return 0;
}