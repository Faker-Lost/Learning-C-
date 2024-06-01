//#include <iostream>
//#include <thread> // 线程类头文件。
//#include <mutex> // 互斥锁类的头文件。
//using namespace std;
//mutex mtx; // 创建互斥锁，保护共享资源 cout 对象。
//// 普通函数。
//void func(int bh, const string& str) {
//	for (int ii = 1; ii <= 10; ii++)
//	{
//		mtx.lock(); // 申请加锁。
//		cout << "第" << ii << "次表白：亲爱的" << bh << "号，" << str << endl;
//		mtx.unlock(); // 解锁。
//		this_thread::sleep_for(chrono::seconds(1)); // 休眠 1 秒。
//	}
//}
//int main()
//{
//	// 用普通函数创建线程。
//	thread t1(func, 1, "我是一只傻傻鸟。");
//	thread t2(func, 2, "我是一只傻傻鸟。");
//	thread t3(func, 3, "我是一只傻傻鸟。");
//	thread t4(func, 4, "我是一只傻傻鸟。");
//	thread t5(func, 5, "我是一只傻傻鸟。");
//	t1.join(); // 回收线程 t1 的资源。
//	t2.join(); // 回收线程 t2 的资源。
//	t3.join(); // 回收线程 t3 的资源。
//	t4.join(); // 回收线程 t4 的资源。
//	t5.join(); // 回收线程 t5 的资源。
//}