//#include <iostream>
//#include <string>
//#include <thread> // 线程类头文件。
//#include <mutex> // 互斥锁类的头文件。
//#include <deque> // deque 容器的头文件。
//#include <queue> // queue 容器的头文件。
//#include <condition_variable> // 条件变量的头文件。
//using namespace std;
//class AA
//{
//	mutex m_mutex; // 互斥锁。
//	condition_variable m_cond; // 条件变量。
//	queue<string, deque<string>> m_q; // 缓存队列，底层容器用 deque。
//public:
//	void incache(int num) // 生产数据，num 指定数据的个数。
//	{
//		lock_guard<mutex> lock(m_mutex); // 申请加锁。
//		for (int ii = 0; ii < num; ii++)
//		{
//			static int bh = 1; // 超女编号。
//			string message = to_string(bh++) + "号超女"; // 拼接出一个数据。
//			m_q.push(message); // 把生产出来的数据入队。
//		}
//		//m_cond.notify_one(); // 唤醒一个被当前条件变量阻塞的线程。
//		m_cond.notify_all();
//	}
//	void outcache() // 消费者线程任务函数。
//	{
//		while (true)
//		{
//			string message;
//			// 把互斥锁转换成 unique_lock<mutex>，并申请加锁。
//			unique_lock<mutex> lock(m_mutex);
//
//			while (m_q.empty()) // 如果队列空，进入循环，否则直接处理数据。必须用循环，不能用 if
//				m_cond.wait(lock); // 等待生产者的唤醒信号。
//
//			// 数据元素出队。
//			message = m_q.front(); m_q.pop();
//			cout << "线程：" << this_thread::get_id() << "，" << message << endl;
//			lock.unlock();
//			
//			// 处理出队的数据（把数据消费掉）。
//			this_thread::sleep_for(chrono::milliseconds(1)); // 假设处理数据需要 1 毫秒。
//			
//		}
//	}
//};
//int main()
//{
//	AA aa;
//	thread t1(&AA::outcache, &aa); // 创建消费者线程 t1。
//	thread t2(&AA::outcache, &aa); // 创建消费者线程 t2。
//	thread t3(&AA::outcache, &aa); // 创建消费者线程 t3。
//	this_thread::sleep_for(chrono::seconds(2)); // 休眠 2 秒。
//	aa.incache(3); // 生产 3 个数据。
//	this_thread::sleep_for(chrono::seconds(3)); // 休眠 3 秒。
//	aa.incache(5); // 生产 5 个数据。
//	t1.join(); // 回收子线程的资源。
//	t2.join();
//	t3.join();
//}