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
////类的非静态成员函数
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
//	
//	//1 普通函数
//	cout << "=============普通函数================" << endl;
//	void(*ptr1)(int, const string&) = show;
//	ptr1(1, "我是小小鸟");
//	//包装普通类 template<返回类型(参数列表)> 变量名 = 全局函数名;
//	function<void(int, const string&)> fn1 = show;
//	function<FUN> fn2 = show;
//	fn1(1, "普通函数-我是小小鸟");
//	fn2(1, "包装普通函数-我是小小鸟");
//	//bind绑定普通函数
//	function<void(int, const string&)> ff1 = bind(show, placeholders::_1, placeholders::_2);
//	ff1(1, "bind普通函数");
//	
//	//2 仿函数
//	cout << "=============仿函数================" << endl;
//	BB bb;
//	bb(2, "仿函数-我是小小鸟");
//	function<void(int, const string&)> fn4 = bb;
//	fn4(2, "包装仿函数-我是小小鸟");
//	//bind 仿函数 bind(bb,...);BB()匿名对象
//	function<void(int, const string&)> ff2 = bind(BB(), placeholders::_1, placeholders::_2);;
//	ff2(2, "bind 仿函数");
//
//	//3 类的静态成员函数
//	cout << "=============类的静态成员函数================" << endl;
//	void(*ptr2)(int, const string&) = AA::show;
//	ptr2(3, "静态成员函数-我是小小鸟");
//	function<void(int, const string&)> fn3 = AA::show;
//	fn3(3, "包装静态成员函数-我是小小鸟");
//	//bind类的静态成员函数
//	function<void(int, const string&)> ff3 = bind(AA::show, placeholders::_1, placeholders::_2);
//	ff3(3, "bind类的静态成员函数");
//
//	//4 类的非静态成员函数
//	cout << "=============类的非静态成员函数================" << endl;
//	CC cc;
//	void(CC:: * ptr3)(int, const string&) = &CC::show;
//	(cc.*ptr3)(4, "类的成员函数-我是小小鸟");
//	function<void(CC&, int, const string&)> fn11 = &CC::show;
//	fn11(cc, 4, "包装类的成员函数-我是小小鸟");
//	function<void(int, const string&)> ff4 = bind(&CC::show,&cc, placeholders::_1, placeholders::_2);
//	ff4(4, "bind 类的非静态成员函数");
//
//	//5 lambda 函数
//	cout << "=============lambda 函数================" << endl;
//	auto lb = [](int bh, const string& message)
//		{
//			cout << "亲爱的" << bh << "，" << message << endl;
//		};
//	lb(5, "lambd-我是小小鸟");
//	function<void(int, const string&)> fn5 = lb;
//	fn5(5, "包装lambda-我是小小鸟");
//	function<void(int, const string&)> ff5 = bind(lb, placeholders::_1, placeholders::_2);
//	ff5(5, "bind lambd函数");
//
//
//	return 0;
//}