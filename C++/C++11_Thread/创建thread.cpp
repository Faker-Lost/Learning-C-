//#include<iostream>
//#include<thread>
//#include<memory>
//#include<string>
//#include<Windows.h>
//using namespace std;
//
//void func(int bh, string str)
//{
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "��" << ii << "�α�ף����ã� " << bh << " �� " <<str<< endl;
//		Sleep(1000);
//	}
//}
//
////lambda����
//auto f = [](int bh, string str) {
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "��" << ii << "�α�ף����ã� " << bh << " �� " << str << endl;
//		Sleep(1000);
//	}
//	};
////�º���
//class myThread
//{
//public:
//	void operator()(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "��" << ii << "�α�ף����ã� " << bh << " �� " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
////��ľ�̬��Ա����
//class myThread2 {
//public:
//	static void func(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "��" << ii << "�α�ף����ã� " << bh << " �� " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
////�����ͨ��Ա����
//class myThread3
//{
//public:
//	void func(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "��" << ii << "�α�ף����ã� " << bh << " �� " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//int main()
//{
//	//thread th1(func, 1,"����");
//	//thread th2(func, 2, "����һֻСС��");
//	//thread th3(f, 3, "sssss");
//	//thread th4(myThread(), 4, "bbbbbbbbb"); 
//	//thread th5(myThread2::func, 5, "sbsbsbsbsb");
//	
//	//�����ͨ��Ա���������߳�
//	myThread3 myth3;
//	//�����ȴ�����Ķ��󣬱��뱣֤������������ڱ����߳�Ҫ��
//	//��һ��������Ա�����ĵ�ַ���ڶ����Ƕ���ĵ�ַthisָ��
//	thread th6(&myThread3::func,&myth3, 6, "����һֻСС��");
//
//	cout << "����ʼ:" << endl;
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "ִ��������....." << endl;
//		Sleep(1000);
//	}
//	cout << "�������" << endl;
//	//th1.join();
//	//th2.join();
//	//th3.join();
//	//th4.join();
//	//th5.join();
//	th6.join();
//	return 0;
//}