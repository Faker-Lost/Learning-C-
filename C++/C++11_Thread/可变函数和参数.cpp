#include<iostream>
#include<functional>
using namespace std;
//普通函数
void show1()
{
	cout << "我是一只小小鸟" << endl;
}
//普通参数函数
void show2(const string& message)
{
	cout << message << " ，我是一只小小鸟" << endl;
}
//类的非静态成员函数
struct AA
{
	void show3(int bh, const string& message)
	{
		cout << "bh:" << bh << "  message:" << message << " 我是一只小小鸟" << endl;
	}
};
//类的静态成员函数
struct BB
{
	static void show4(int bh, const string& message)
	{
		cout << "bh:" << bh << "  message:" << message << " 我是一只小小鸟" << endl;
	}
};
//模板函数 1.可调用对象 2.可变参数包
template<typename Func,typename ...Args>
auto show(Func fun, Args ...args)
{
	cout << "准备工作..." << endl;

	auto f = bind(fun, args...);
	f();

	cout << "工作完成..." << endl;

	return f;
}
int main()
{
	//普通函数
	show(show1);
	//有参函数
	show(show2, "冰冰一号");
	//类的非静态成员函数
	AA aa;
	show(&AA::show3, &aa, 3, "冰冰二号");
	//类的静态成员函数
	BB bb;
	show(BB::show4, 4, "冰冰三号");
	//lambda 函数
	auto f = [](int bh, const string& message)
		{
			cout << "bh:" << bh << "  message:" << message << " 我是一只小小鸟" << endl;
		};
	show(f, 5, "冰冰四号");

	return 0;
}