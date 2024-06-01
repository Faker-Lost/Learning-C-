//#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//using namespace std;
////回调函数 模板化 
//template<class T>
//bool show(T str)
//{
//	if (str != 3) return false;
//	cout << "亲爱的：" << str << "号，我爱你。" << endl;
//	return true;
//	
//}
////类 
//template<class T>
//class zs {
//public:
//	T m_num;
//	zs(const T& num):m_num(num) {}
//	bool operator()(const T& str)
//	{	
//		if (str != m_num) return false;
//		cout <<"仿函数调用——" << "亲爱的：" << str << "号，我爱你。" << endl;
//		
//		return true;
//	}
//};
//
////迭代器模板化
////1.将回调函数传入到函数中,第三个参数是函数指针
//
////2.将类的成员函数传入到，第三个参数为类,调用类的成员函数
//
////将第三个参数作为模板的第二个类型，将两个模板整合为一个模板
//template<class T1, class T2>
//T1 findif(T1 first, T1 second, T2 ss)
//{
//	for (auto it = first; it != second; it++)
//	{
//		//改为回调函数
//		if (ss(*it) == true) return it;
//	}
//	return second;
//}
//
//int main()
//{
//	cout << "----------vector------------" << endl;
//	vector<int> v1{ 1,2,3,4,5,6,7,8 };			//int 类型容器
//	list<string> l1{ "1","2","3","4","5","6" };	// string 类型容器
//	//返回迭代器
//	auto it1 = findif(v1.begin(), v1.end(), zs<int>(3));
//	if (it1 == v1.end())
//	{
//		cout << "查找失败" << endl;
//	}
//	else
//	{
//		cout << "查找成功" << endl;
//	}
//
//	cout << "-------string------" << endl;
//	auto it2 = findif(l1.begin(), l1.end(), zs<string>("3"));
//	if (it2 == l1.end())
//	{
//		cout << "查找失败" << endl;
//	}
//	else
//	{
//		cout << "查找成功" << endl;
//	}
//	cout << "--------STL find_if-----------" << endl;
//	auto it3 = find_if(l1.begin(), l1.end(), zs<string>("3"));
//	if (it3 == l1.end())
//	{
//		cout << "查找失败" << endl;
//	}
//	else
//	{
//		cout << "查找成功" << endl;
//	}
//
//	return 0;
//}