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
//		cout << "第" << ii << "次表白，您好： " << bh << " 号 " <<str<< endl;
//		Sleep(1000);
//	}
//}
//
////lambda函数
//auto f = [](int bh, string str) {
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "第" << ii << "次表白，您好： " << bh << " 号 " << str << endl;
//		Sleep(1000);
//	}
//	};
////仿函数
//class myThread
//{
//public:
//	void operator()(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "第" << ii << "次表白，您好： " << bh << " 号 " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
////类的静态成员函数
//class myThread2 {
//public:
//	static void func(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "第" << ii << "次表白，您好： " << bh << " 号 " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
////类的普通成员函数
//class myThread3
//{
//public:
//	void func(int bh, const string& str)
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			cout << "第" << ii << "次表白，您好： " << bh << " 号 " << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//int main()
//{
//	//thread th1(func, 1,"冰冰");
//	//thread th2(func, 2, "我是一只小小鸟");
//	//thread th3(f, 3, "sssss");
//	//thread th4(myThread(), 4, "bbbbbbbbb"); 
//	//thread th5(myThread2::func, 5, "sbsbsbsbsb");
//	
//	//类的普通成员函数创建线程
//	myThread3 myth3;
//	//必须先创建类的对象，必须保证对象的生命周期比子线程要长
//	//第一个参数成员函数的地址，第二个是对象的地址this指针
//	thread th6(&myThread3::func,&myth3, 6, "我是一只小小鸟");
//
//	cout << "任务开始:" << endl;
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "执行任务中....." << endl;
//		Sleep(1000);
//	}
//	cout << "任务完成" << endl;
//	//th1.join();
//	//th2.join();
//	//th3.join();
//	//th4.join();
//	//th5.join();
//	th6.join();
//	return 0;
//}