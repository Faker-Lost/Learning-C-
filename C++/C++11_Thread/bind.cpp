//#include <iostream>
//#include<functional>
//using namespace std;
////��ͨ����
//void show(int bh, const string& message)
//{
//	cout << "�װ���" << bh << "��" << message << endl;
//}
////�º���
//struct BB // �º�����
//{
//	void operator()(int bh, const string& message) {
//		cout << "�װ���" << bh << "��" << message << endl;
//	}
//};
////��ľ�̬��Ա����
//struct AA
//{
//	static void show(int bh, const string& message)
//	{
//		cout << "�װ���" << bh << "��" << message << endl;
//	}
//};
////��ķǾ�̬��Ա����
//struct CC
//{
//	void show(int bh, const string& message)
//	{
//		cout << "�װ���" << bh << "��" << message << endl;
//	}
//};
//
//int main()
//{
//	using FUN = void(int, const string&);
//
//	
//	//1 ��ͨ����
//	cout << "=============��ͨ����================" << endl;
//	void(*ptr1)(int, const string&) = show;
//	ptr1(1, "����СС��");
//	//��װ��ͨ�� template<��������(�����б�)> ������ = ȫ�ֺ�����;
//	function<void(int, const string&)> fn1 = show;
//	function<FUN> fn2 = show;
//	fn1(1, "��ͨ����-����СС��");
//	fn2(1, "��װ��ͨ����-����СС��");
//	//bind����ͨ����
//	function<void(int, const string&)> ff1 = bind(show, placeholders::_1, placeholders::_2);
//	ff1(1, "bind��ͨ����");
//	
//	//2 �º���
//	cout << "=============�º���================" << endl;
//	BB bb;
//	bb(2, "�º���-����СС��");
//	function<void(int, const string&)> fn4 = bb;
//	fn4(2, "��װ�º���-����СС��");
//	//bind �º��� bind(bb,...);BB()��������
//	function<void(int, const string&)> ff2 = bind(BB(), placeholders::_1, placeholders::_2);;
//	ff2(2, "bind �º���");
//
//	//3 ��ľ�̬��Ա����
//	cout << "=============��ľ�̬��Ա����================" << endl;
//	void(*ptr2)(int, const string&) = AA::show;
//	ptr2(3, "��̬��Ա����-����СС��");
//	function<void(int, const string&)> fn3 = AA::show;
//	fn3(3, "��װ��̬��Ա����-����СС��");
//	//bind��ľ�̬��Ա����
//	function<void(int, const string&)> ff3 = bind(AA::show, placeholders::_1, placeholders::_2);
//	ff3(3, "bind��ľ�̬��Ա����");
//
//	//4 ��ķǾ�̬��Ա����
//	cout << "=============��ķǾ�̬��Ա����================" << endl;
//	CC cc;
//	void(CC:: * ptr3)(int, const string&) = &CC::show;
//	(cc.*ptr3)(4, "��ĳ�Ա����-����СС��");
//	function<void(CC&, int, const string&)> fn11 = &CC::show;
//	fn11(cc, 4, "��װ��ĳ�Ա����-����СС��");
//	function<void(int, const string&)> ff4 = bind(&CC::show,&cc, placeholders::_1, placeholders::_2);
//	ff4(4, "bind ��ķǾ�̬��Ա����");
//
//	//5 lambda ����
//	cout << "=============lambda ����================" << endl;
//	auto lb = [](int bh, const string& message)
//		{
//			cout << "�װ���" << bh << "��" << message << endl;
//		};
//	lb(5, "lambd-����СС��");
//	function<void(int, const string&)> fn5 = lb;
//	fn5(5, "��װlambda-����СС��");
//	function<void(int, const string&)> ff5 = bind(lb, placeholders::_1, placeholders::_2);
//	ff5(5, "bind lambd����");
//
//
//	return 0;
//}