//#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//using namespace std;
////�ص����� ģ�廯 
//template<class T>
//bool show(T str)
//{
//	if (str != 3) return false;
//	cout << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//	return true;
//	
//}
////�� 
//template<class T>
//class zs {
//public:
//	T m_num;
//	zs(const T& num):m_num(num) {}
//	bool operator()(const T& str)
//	{	
//		if (str != m_num) return false;
//		cout <<"�º������á���" << "�װ��ģ�" << str << "�ţ��Ұ��㡣" << endl;
//		
//		return true;
//	}
//};
//
////������ģ�廯
////1.���ص��������뵽������,�����������Ǻ���ָ��
//
////2.����ĳ�Ա�������뵽������������Ϊ��,������ĳ�Ա����
//
////��������������Ϊģ��ĵڶ������ͣ�������ģ������Ϊһ��ģ��
//template<class T1, class T2>
//T1 findif(T1 first, T1 second, T2 ss)
//{
//	for (auto it = first; it != second; it++)
//	{
//		//��Ϊ�ص�����
//		if (ss(*it) == true) return it;
//	}
//	return second;
//}
//
//int main()
//{
//	cout << "----------vector------------" << endl;
//	vector<int> v1{ 1,2,3,4,5,6,7,8 };			//int ��������
//	list<string> l1{ "1","2","3","4","5","6" };	// string ��������
//	//���ص�����
//	auto it1 = findif(v1.begin(), v1.end(), zs<int>(3));
//	if (it1 == v1.end())
//	{
//		cout << "����ʧ��" << endl;
//	}
//	else
//	{
//		cout << "���ҳɹ�" << endl;
//	}
//
//	cout << "-------string------" << endl;
//	auto it2 = findif(l1.begin(), l1.end(), zs<string>("3"));
//	if (it2 == l1.end())
//	{
//		cout << "����ʧ��" << endl;
//	}
//	else
//	{
//		cout << "���ҳɹ�" << endl;
//	}
//	cout << "--------STL find_if-----------" << endl;
//	auto it3 = find_if(l1.begin(), l1.end(), zs<string>("3"));
//	if (it3 == l1.end())
//	{
//		cout << "����ʧ��" << endl;
//	}
//	else
//	{
//		cout << "���ҳɹ�" << endl;
//	}
//
//	return 0;
//}