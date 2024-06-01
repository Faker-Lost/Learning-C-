//#include <iostream>
//#include<functional>
//using namespace std;
////普通函数
//void show(int bh, const string& message)
//{
//	cout << "亲爱的" << bh << "，" << message << endl;
//}
////仿函数
//struct BB // 仿函数。
//{
//	void operator()(int bh, const string& message) {
//		cout << "亲爱的" << bh << "，" << message << endl;
//	}
//};
////类的静态成员函数
//struct AA
//{
//	static void show(int bh, const string& message)
//	{
//		cout << "亲爱的" << bh << "，" << message << endl;
//	}
//};
////类的普通函数
//struct CC
//{
//	void show(int bh, const string& message)
//	{
//		cout << "亲爱的" << bh << "，" << message << endl;
//	}
//};
//
//int main()
//{
//	using FUN = void(int, const string&);
//
//	//1 普通函数
//	void(*ptr1)(int, const string&) = show;
//	ptr1(1, "我是小小鸟");
//	//包装普通类 template<返回类型(参数列表)> 变量名 = 全局函数名;
//	function<void(int, const string&)> fn1 = show;
//	function<FUN> fn2 = show;
//	fn1(1, "普通函数-我是小小鸟");
//	fn2(1, "包装普通函数-我是小小鸟");
//	//2 仿函数
//	BB bb;
//	bb(2, "仿函数-我是小小鸟");
//	function<void(int, const string&)> fn4 = bb;
//	fn4(2, "包装仿函数-我是小小鸟");
//	////3 类的静态成员函数
//	void(*ptr2)(int, const string&) = AA::show;
//	ptr2(3, "静态成员函数-我是小小鸟");
//	function<void(int, const string&)> fn3 = AA::show;
//	fn3(3, "包装静态成员函数-我是小小鸟");
//	////4 类的成员函数
//	CC cc;
//	void(CC::*ptr3)(int, const string&) = &CC::show;
//	(cc.*ptr3)(4, "类的成员函数-我是小小鸟");
//
//	function<void(CC&,int, const string&)> fn11 = &CC::show;
//	fn11(cc, 4, "包装类的成员函数-我是小小鸟");
//
//	////5 lambda 函数
//	auto lb = [](int bh, const string& message)
//		{
//			cout << "亲爱的" << bh << "，" << message << endl;
//		};
//	lb(5, "lambd-我是小小鸟");
//	function<void(int, const string&)> fn5 = lb;
//	fn5(5, "包装lambda-我是小小鸟");
//
//	return 0;
//}