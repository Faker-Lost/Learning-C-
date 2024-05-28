//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
////回调函数
//template<class T>
//void show(const T& str)
//{
//	cout << "亲爱的：" << str << "号，我爱你。" << endl;
//}
////类
//template<class T>
//class zs {
//public:
//	void operator()(const T& str)
//	{
//		cout << "亲爱的：" << str << "号，我爱你。" << endl;
//	}
//};
//
////将第三个参数作为模板的第二个类型，将两个模板整合为一个模板
//template<class T1, class T2>
//void foreach(T1 first, T1 second, T2 ss)
//{
//	for (auto it = first; it != second; it++)
//	{
//		ss(*it);
//	}
//}
//
//int main()
//{
//	vector<int> v1{ 1,2,3,4,5,6,7,8 };
//	list<string> l1{ "1","2","3","4","5","6" };
//
//	foreach(v1.begin(), v1.end(), zs<int>());
//	cout << "-------string------" << endl;
//	foreach(l1.begin(), l1.end(), zs<string>());
//
//	return 0;
//}