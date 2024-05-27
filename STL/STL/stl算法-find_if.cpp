//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
////回调函数
//template<class T>
//bool show(const T& str)
//{
//	if (str != 1) return false;
//	cout << "亲爱的：" << str << "号，我爱你。" << endl;
//	return true;
//}
////类
//template<class T>
//class Person {
//public:
//	bool operator()(T& str)
//	{
//		if (str != 3) return false;
//		cout << "亲爱的：" << str << "号，我爱你。" << endl;
//		return true;
//	}
//};
//
////将第三个参数作为模板的第二个类型，将两个模板整合为一个模板
//template<class T1, class T2>
//T1 findif(T1 first, T1 end, T2 pre)
//{
//	for (auto it = first; it != end; it++)
//	{
//		if (pre(*it) == true)
//		{
//			return it;
//		}
//		return end;
//	}
//}
//
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5,6,7,8 };
//	//list<string> l1{ "1","2","3","4","5","6" };
//
//	auto it = findif(v1.begin(), v1.end(), Person<int>());
//	if (it == v1.end())
//	{
//		cout << "查找失败" << endl;
//	}
//	else
//	{
//		cout << "查找成功" << endl;
//	}
//	//cout << "-------string------" << endl;
//	//findif(l1.begin(), l1.end(), Person<string>());
//
//	return 0;
//}