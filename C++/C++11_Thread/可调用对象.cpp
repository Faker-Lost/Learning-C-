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
////�����ͨ����
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
//	//1 ��ͨ����
//	void(*ptr1)(int, const string&) = show;
//	ptr1(1, "����СС��");
//	//��װ��ͨ�� template<��������(�����б�)> ������ = ȫ�ֺ�����;
//	function<void(int, const string&)> fn1 = show;
//	function<FUN> fn2 = show;
//	fn1(1, "��ͨ����-����СС��");
//	fn2(1, "��װ��ͨ����-����СС��");
//	//2 �º���
//	BB bb;
//	bb(2, "�º���-����СС��");
//	function<void(int, const string&)> fn4 = bb;
//	fn4(2, "��װ�º���-����СС��");
//	////3 ��ľ�̬��Ա����
//	void(*ptr2)(int, const string&) = AA::show;
//	ptr2(3, "��̬��Ա����-����СС��");
//	function<void(int, const string&)> fn3 = AA::show;
//	fn3(3, "��װ��̬��Ա����-����СС��");
//	////4 ��ĳ�Ա����
//	CC cc;
//	void(CC::*ptr3)(int, const string&) = &CC::show;
//	(cc.*ptr3)(4, "��ĳ�Ա����-����СС��");
//
//	function<void(CC&,int, const string&)> fn11 = &CC::show;
//	fn11(cc, 4, "��װ��ĳ�Ա����-����СС��");
//
//	////5 lambda ����
//	auto lb = [](int bh, const string& message)
//		{
//			cout << "�װ���" << bh << "��" << message << endl;
//		};
//	lb(5, "lambd-����СС��");
//	function<void(int, const string&)> fn5 = lb;
//	fn5(5, "��װlambda-����СС��");
//
//	return 0;
//}