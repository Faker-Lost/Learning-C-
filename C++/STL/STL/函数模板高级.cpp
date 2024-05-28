//#include<iostream>
//
//using namespace std;
//int func()
//{
//	cout << "调用函数" << endl; \
//		return 3;
//}
//int main()
//{
//	//类型相同
//	int a = 5;
//	int b = 10;
//	int& ra = a;
//	decltype(a) da1 = b;
//	//函数返回值类型相同 填函数调用和函数名是两个概念
//	//函数名 得到是函数类型 *da 函数指针
//	decltype(func) *da = func;
//	da();
//	//引用 括号括起来的函数
//	decltype((func)) da2 = func;
//	da2();
//	//引用 括号括起来的标识符
//	int c = 10;
//	int d = 10;
//	decltype((c)) da3 = d;
//	//左值 引用
//	int e = 10;
//	int f = 10;
//	decltype(e++) da4 = f;
//	return 0;
//}