//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
////�ص�����
//template<class T>
//void show(const T& str)
//{
//	cout << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//}
////��
//template<class T>
//class zs {
//public:
//	void operator()(const T& str)
//	{
//		cout << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//	}
//};
//
////��������������Ϊģ��ĵڶ������ͣ�������ģ������Ϊһ��ģ��
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