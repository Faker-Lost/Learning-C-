//#include<iostream>
//#include<memory>
//using namespace std;
//
//class AA {
//public:
//	string m_name;
//	AA() { cout << m_name << "���ù��캯��" << endl; }
//	AA(const string& name) :m_name(name) {
//		cout << "���ù��캯��AA()" << m_name << endl;
//	}
//	~AA()
//	{
//		cout << "������������~AA()" << endl;
//	}
//};
//unique_ptr<AA> func()
//{
//	unique_ptr<AA> pp(new AA("����2"));
//	return pp;
//}
//int main()
//{
//	//unique_ptr<AA> ptr(new AA("����"));
//	unique_ptr<AA> ptr2;
//
//	// ptr2 = ptr;  ����
//
//	ptr2 = unique_ptr<AA>(new AA("����"));
//	ptr2 = func();
//	ptr2 = nullptr;
//
//
//	//delete�ͷŶ����ڴ�
//	//delete aa;
//	return 0;
//}