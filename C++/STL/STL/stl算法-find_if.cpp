//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
////�ص�����
//template<class T>
//bool show(const T& str)
//{
//	if (str != 1) return false;
//	cout << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//	return true;
//}
////��
//template<class T>
//class Person {
//public:
//	bool operator()(T& str)
//	{
//		if (str != 3) return false;
//		cout << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//		return true;
//	}
//};
//
////��������������Ϊģ��ĵڶ������ͣ�������ģ������Ϊһ��ģ��
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
//		cout << "����ʧ��" << endl;
//	}
//	else
//	{
//		cout << "���ҳɹ�" << endl;
//	}
//	//cout << "-------string------" << endl;
//	//findif(l1.begin(), l1.end(), Person<string>());
//
//	return 0;
//}